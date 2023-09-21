#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_user.h"


char* rolepatch_user_ToString(quicksilver_web_api_patch_user_ROLE_e role) {
    char* roleArray[] =  { "NULL", "admin", "standard" };
	return roleArray[role];
}

quicksilver_web_api_patch_user_ROLE_e rolepatch_user_FromString(char* role){
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

patch_user_t *patch_user_create(
    char *name,
    quicksilver_web_api_patch_user_ROLE_e role,
    char *pwd,
    int locked
    ) {
    patch_user_t *patch_user_local_var = malloc(sizeof(patch_user_t));
    if (!patch_user_local_var) {
        return NULL;
    }
    patch_user_local_var->name = name;
    patch_user_local_var->role = role;
    patch_user_local_var->pwd = pwd;
    patch_user_local_var->locked = locked;

    return patch_user_local_var;
}


void patch_user_free(patch_user_t *patch_user) {
    if(NULL == patch_user){
        return ;
    }
    listEntry_t *listEntry;
    if (patch_user->name) {
        free(patch_user->name);
        patch_user->name = NULL;
    }
    if (patch_user->pwd) {
        free(patch_user->pwd);
        patch_user->pwd = NULL;
    }
    free(patch_user);
}

cJSON *patch_user_convertToJSON(patch_user_t *patch_user) {
    cJSON *item = cJSON_CreateObject();

    // patch_user->name
    if(patch_user->name) {
    if(cJSON_AddStringToObject(item, "name", patch_user->name) == NULL) {
    goto fail; //String
    }
    }


    // patch_user->role
    if(patch_user->role != quicksilver_web_api_patch_user_ROLE_NULL) {
    if(cJSON_AddStringToObject(item, "role", rolepatch_user_ToString(patch_user->role)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // patch_user->pwd
    if(patch_user->pwd) {
    if(cJSON_AddStringToObject(item, "pwd", patch_user->pwd) == NULL) {
    goto fail; //String
    }
    }


    // patch_user->locked
    if(patch_user->locked) {
    if(cJSON_AddBoolToObject(item, "locked", patch_user->locked) == NULL) {
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

patch_user_t *patch_user_parseFromJSON(cJSON *patch_userJSON){

    patch_user_t *patch_user_local_var = NULL;

    // patch_user->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(patch_userJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // patch_user->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(patch_userJSON, "role");
    quicksilver_web_api_patch_user_ROLE_e roleVariable;
    if (role) { 
    if(!cJSON_IsString(role))
    {
    goto end; //Enum
    }
    roleVariable = rolepatch_user_FromString(role->valuestring);
    }

    // patch_user->pwd
    cJSON *pwd = cJSON_GetObjectItemCaseSensitive(patch_userJSON, "pwd");
    if (pwd) { 
    if(!cJSON_IsString(pwd) && !cJSON_IsNull(pwd))
    {
    goto end; //String
    }
    }

    // patch_user->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(patch_userJSON, "locked");
    if (locked) { 
    if(!cJSON_IsBool(locked))
    {
    goto end; //Bool
    }
    }


    patch_user_local_var = patch_user_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        role ? roleVariable : -1,
        pwd && !cJSON_IsNull(pwd) ? strdup(pwd->valuestring) : NULL,
        locked ? locked->valueint : 0
        );

    return patch_user_local_var;
end:
    return NULL;

}
