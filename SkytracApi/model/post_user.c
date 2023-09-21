#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_user.h"


char* rolepost_user_ToString(quicksilver_web_api_post_user_ROLE_e role) {
    char* roleArray[] =  { "NULL", "admin", "standard" };
	return roleArray[role];
}

quicksilver_web_api_post_user_ROLE_e rolepost_user_FromString(char* role){
    int stringToReturn = 0;
    char *roleArray[] =  { "NULL", "admin", "standard" };
    size_t sizeofArray = sizeof(roleArray) / sizeof(roleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(role, roleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

post_user_t *post_user_create(
    char *name,
    quicksilver_web_api_post_user_ROLE_e role,
    char *pwd,
    int locked
    ) {
    post_user_t *post_user_local_var = malloc(sizeof(post_user_t));
    if (!post_user_local_var) {
        return NULL;
    }
    post_user_local_var->name = name;
    post_user_local_var->role = role;
    post_user_local_var->pwd = pwd;
    post_user_local_var->locked = locked;

    return post_user_local_var;
}


void post_user_free(post_user_t *post_user) {
    if(NULL == post_user){
        return ;
    }
    listEntry_t *listEntry;
    if (post_user->name) {
        free(post_user->name);
        post_user->name = NULL;
    }
    if (post_user->pwd) {
        free(post_user->pwd);
        post_user->pwd = NULL;
    }
    free(post_user);
}

cJSON *post_user_convertToJSON(post_user_t *post_user) {
    cJSON *item = cJSON_CreateObject();

    // post_user->name
    if (!post_user->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", post_user->name) == NULL) {
    goto fail; //String
    }


    // post_user->role
    if (quicksilver_web_api_post_user_ROLE_NULL == post_user->role) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "role", rolepost_user_ToString(post_user->role)) == NULL)
    {
    goto fail; //Enum
    }


    // post_user->pwd
    if (!post_user->pwd) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pwd", post_user->pwd) == NULL) {
    goto fail; //String
    }


    // post_user->locked
    if(post_user->locked) {
    if(cJSON_AddBoolToObject(item, "locked", post_user->locked) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

post_user_t *post_user_parseFromJSON(cJSON *post_userJSON){

    post_user_t *post_user_local_var = NULL;

    // post_user->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(post_userJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // post_user->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(post_userJSON, "role");
    if (!role) {
        goto end;
    }

    quicksilver_web_api_post_user_ROLE_e roleVariable;
    
    if(!cJSON_IsString(role))
    {
    goto end; //Enum
    }
    roleVariable = rolepost_user_FromString(role->valuestring);

    // post_user->pwd
    cJSON *pwd = cJSON_GetObjectItemCaseSensitive(post_userJSON, "pwd");
    if (!pwd) {
        goto end;
    }

    
    if(!cJSON_IsString(pwd))
    {
    goto end; //String
    }

    // post_user->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(post_userJSON, "locked");
    if (locked) { 
    if(!cJSON_IsBool(locked))
    {
    goto end; //Bool
    }
    }


    post_user_local_var = post_user_create (
        strdup(name->valuestring),
        roleVariable,
        strdup(pwd->valuestring),
        locked ? locked->valueint : 0
        );

    return post_user_local_var;
end:
    return NULL;

}
