#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_session_refresh_post_200_response.h"



_session_refresh_post_200_response_t *_session_refresh_post_200_response_create(
    char *token,
    char *refresh_token
    ) {
    _session_refresh_post_200_response_t *_session_refresh_post_200_response_local_var = malloc(sizeof(_session_refresh_post_200_response_t));
    if (!_session_refresh_post_200_response_local_var) {
        return NULL;
    }
    _session_refresh_post_200_response_local_var->token = token;
    _session_refresh_post_200_response_local_var->refresh_token = refresh_token;

    return _session_refresh_post_200_response_local_var;
}


void _session_refresh_post_200_response_free(_session_refresh_post_200_response_t *_session_refresh_post_200_response) {
    if(NULL == _session_refresh_post_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (_session_refresh_post_200_response->token) {
        free(_session_refresh_post_200_response->token);
        _session_refresh_post_200_response->token = NULL;
    }
    if (_session_refresh_post_200_response->refresh_token) {
        free(_session_refresh_post_200_response->refresh_token);
        _session_refresh_post_200_response->refresh_token = NULL;
    }
    free(_session_refresh_post_200_response);
}

cJSON *_session_refresh_post_200_response_convertToJSON(_session_refresh_post_200_response_t *_session_refresh_post_200_response) {
    cJSON *item = cJSON_CreateObject();

    // _session_refresh_post_200_response->token
    if(_session_refresh_post_200_response->token) {
    if(cJSON_AddStringToObject(item, "token", _session_refresh_post_200_response->token) == NULL) {
    goto fail; //String
    }
    }


    // _session_refresh_post_200_response->refresh_token
    if(_session_refresh_post_200_response->refresh_token) {
    if(cJSON_AddStringToObject(item, "refreshToken", _session_refresh_post_200_response->refresh_token) == NULL) {
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

_session_refresh_post_200_response_t *_session_refresh_post_200_response_parseFromJSON(cJSON *_session_refresh_post_200_responseJSON){

    _session_refresh_post_200_response_t *_session_refresh_post_200_response_local_var = NULL;

    // _session_refresh_post_200_response->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(_session_refresh_post_200_responseJSON, "token");
    if (token) { 
    if(!cJSON_IsString(token) && !cJSON_IsNull(token))
    {
    goto end; //String
    }
    }

    // _session_refresh_post_200_response->refresh_token
    cJSON *refresh_token = cJSON_GetObjectItemCaseSensitive(_session_refresh_post_200_responseJSON, "refreshToken");
    if (refresh_token) { 
    if(!cJSON_IsString(refresh_token) && !cJSON_IsNull(refresh_token))
    {
    goto end; //String
    }
    }


    _session_refresh_post_200_response_local_var = _session_refresh_post_200_response_create (
        token && !cJSON_IsNull(token) ? strdup(token->valuestring) : NULL,
        refresh_token && !cJSON_IsNull(refresh_token) ? strdup(refresh_token->valuestring) : NULL
        );

    return _session_refresh_post_200_response_local_var;
end:
    return NULL;

}
