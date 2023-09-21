#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_user.h"


char* roleget_user_ToString(quicksilver_web_api_get_user_ROLE_e role) {
    char* roleArray[] =  { "NULL", "admin", "standard" };
	return roleArray[role];
}

quicksilver_web_api_get_user_ROLE_e roleget_user_FromString(char* role){
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

get_user_t *get_user_create(
    char *name,
    quicksilver_web_api_get_user_ROLE_e role,
    char *pwd,
    int locked,
    double sessions
    ) {
    get_user_t *get_user_local_var = malloc(sizeof(get_user_t));
    if (!get_user_local_var) {
        return NULL;
    }
    get_user_local_var->name = name;
    get_user_local_var->role = role;
    get_user_local_var->pwd = pwd;
    get_user_local_var->locked = locked;
    get_user_local_var->sessions = sessions;

    return get_user_local_var;
}


void get_user_free(get_user_t *get_user) {
    if(NULL == get_user){
        return ;
    }
    listEntry_t *listEntry;
    if (get_user->name) {
        free(get_user->name);
        get_user->name = NULL;
    }
    if (get_user->pwd) {
        free(get_user->pwd);
        get_user->pwd = NULL;
    }
    free(get_user);
}

cJSON *get_user_convertToJSON(get_user_t *get_user) {
    cJSON *item = cJSON_CreateObject();

    // get_user->name
    if (!get_user->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", get_user->name) == NULL) {
    goto fail; //String
    }


    // get_user->role
    if (quicksilver_web_api_get_user_ROLE_NULL == get_user->role) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "role", roleget_user_ToString(get_user->role)) == NULL)
    {
    goto fail; //Enum
    }


    // get_user->pwd
    if (!get_user->pwd) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pwd", get_user->pwd) == NULL) {
    goto fail; //String
    }


    // get_user->locked
    if (!get_user->locked) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "locked", get_user->locked) == NULL) {
    goto fail; //Bool
    }


    // get_user->sessions
    if (!get_user->sessions) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "sessions", get_user->sessions) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_user_t *get_user_parseFromJSON(cJSON *get_userJSON){

    get_user_t *get_user_local_var = NULL;

    // get_user->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(get_userJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // get_user->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(get_userJSON, "role");
    if (!role) {
        goto end;
    }

    quicksilver_web_api_get_user_ROLE_e roleVariable;
    
    if(!cJSON_IsString(role))
    {
    goto end; //Enum
    }
    roleVariable = roleget_user_FromString(role->valuestring);

    // get_user->pwd
    cJSON *pwd = cJSON_GetObjectItemCaseSensitive(get_userJSON, "pwd");
    if (!pwd) {
        goto end;
    }

    
    if(!cJSON_IsString(pwd))
    {
    goto end; //String
    }

    // get_user->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(get_userJSON, "locked");
    if (!locked) {
        goto end;
    }

    
    if(!cJSON_IsBool(locked))
    {
    goto end; //Bool
    }

    // get_user->sessions
    cJSON *sessions = cJSON_GetObjectItemCaseSensitive(get_userJSON, "sessions");
    if (!sessions) {
        goto end;
    }

    
    if(!cJSON_IsNumber(sessions))
    {
    goto end; //Numeric
    }


    get_user_local_var = get_user_create (
        strdup(name->valuestring),
        roleVariable,
        strdup(pwd->valuestring),
        locked->valueint,
        sessions->valuedouble
        );

    return get_user_local_var;
end:
    return NULL;

}
