#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_sessions_post_201_response.h"



_sessions_post_201_response_t *_sessions_post_201_response_create(
    char *token,
    char *refresh_token
    ) {
    _sessions_post_201_response_t *_sessions_post_201_response_local_var = malloc(sizeof(_sessions_post_201_response_t));
    if (!_sessions_post_201_response_local_var) {
        return NULL;
    }
    _sessions_post_201_response_local_var->token = token;
    _sessions_post_201_response_local_var->refresh_token = refresh_token;

    return _sessions_post_201_response_local_var;
}


void _sessions_post_201_response_free(_sessions_post_201_response_t *_sessions_post_201_response) {
    if(NULL == _sessions_post_201_response){
        return ;
    }
    listEntry_t *listEntry;
    if (_sessions_post_201_response->token) {
        free(_sessions_post_201_response->token);
        _sessions_post_201_response->token = NULL;
    }
    if (_sessions_post_201_response->refresh_token) {
        free(_sessions_post_201_response->refresh_token);
        _sessions_post_201_response->refresh_token = NULL;
    }
    free(_sessions_post_201_response);
}

cJSON *_sessions_post_201_response_convertToJSON(_sessions_post_201_response_t *_sessions_post_201_response) {
    cJSON *item = cJSON_CreateObject();

    // _sessions_post_201_response->token
    if(_sessions_post_201_response->token) {
    if(cJSON_AddStringToObject(item, "token", _sessions_post_201_response->token) == NULL) {
    goto fail; //String
    }
    }


    // _sessions_post_201_response->refresh_token
    if(_sessions_post_201_response->refresh_token) {
    if(cJSON_AddStringToObject(item, "refreshToken", _sessions_post_201_response->refresh_token) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_sessions_post_201_response_t *_sessions_post_201_response_parseFromJSON(cJSON *_sessions_post_201_responseJSON){

    _sessions_post_201_response_t *_sessions_post_201_response_local_var = NULL;

    // _sessions_post_201_response->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(_sessions_post_201_responseJSON, "token");
    if (token) { 
    if(!cJSON_IsString(token) && !cJSON_IsNull(token))
    {
    goto end; //String
    }
    }

    // _sessions_post_201_response->refresh_token
    cJSON *refresh_token = cJSON_GetObjectItemCaseSensitive(_sessions_post_201_responseJSON, "refreshToken");
    if (refresh_token) { 
    if(!cJSON_IsString(refresh_token) && !cJSON_IsNull(refresh_token))
    {
    goto end; //String
    }
    }


    _sessions_post_201_response_local_var = _sessions_post_201_response_create (
        token && !cJSON_IsNull(token) ? strdup(token->valuestring) : NULL,
        refresh_token && !cJSON_IsNull(refresh_token) ? strdup(refresh_token->valuestring) : NULL
        );

    return _sessions_post_201_response_local_var;
end:
    return NULL;

}
