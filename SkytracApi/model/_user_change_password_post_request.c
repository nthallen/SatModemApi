#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_user_change_password_post_request.h"



_user_change_password_post_request_t *_user_change_password_post_request_create(
    char *old,
    char *_new
    ) {
    _user_change_password_post_request_t *_user_change_password_post_request_local_var = malloc(sizeof(_user_change_password_post_request_t));
    if (!_user_change_password_post_request_local_var) {
        return NULL;
    }
    _user_change_password_post_request_local_var->old = old;
    _user_change_password_post_request_local_var->_new = _new;

    return _user_change_password_post_request_local_var;
}


void _user_change_password_post_request_free(_user_change_password_post_request_t *_user_change_password_post_request) {
    if(NULL == _user_change_password_post_request){
        return ;
    }
    listEntry_t *listEntry;
    if (_user_change_password_post_request->old) {
        free(_user_change_password_post_request->old);
        _user_change_password_post_request->old = NULL;
    }
    if (_user_change_password_post_request->_new) {
        free(_user_change_password_post_request->_new);
        _user_change_password_post_request->_new = NULL;
    }
    free(_user_change_password_post_request);
}

cJSON *_user_change_password_post_request_convertToJSON(_user_change_password_post_request_t *_user_change_password_post_request) {
    cJSON *item = cJSON_CreateObject();

    // _user_change_password_post_request->old
    if(_user_change_password_post_request->old) {
    if(cJSON_AddStringToObject(item, "old", _user_change_password_post_request->old) == NULL) {
    goto fail; //String
    }
    }


    // _user_change_password_post_request->_new
    if(_user_change_password_post_request->_new) {
    if(cJSON_AddStringToObject(item, "new", _user_change_password_post_request->_new) == NULL) {
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

_user_change_password_post_request_t *_user_change_password_post_request_parseFromJSON(cJSON *_user_change_password_post_requestJSON){

    _user_change_password_post_request_t *_user_change_password_post_request_local_var = NULL;

    // _user_change_password_post_request->old
    cJSON *old = cJSON_GetObjectItemCaseSensitive(_user_change_password_post_requestJSON, "old");
    if (old) { 
    if(!cJSON_IsString(old) && !cJSON_IsNull(old))
    {
    goto end; //String
    }
    }

    // _user_change_password_post_request->_new
    cJSON *_new = cJSON_GetObjectItemCaseSensitive(_user_change_password_post_requestJSON, "new");
    if (_new) { 
    if(!cJSON_IsString(_new) && !cJSON_IsNull(_new))
    {
    goto end; //String
    }
    }


    _user_change_password_post_request_local_var = _user_change_password_post_request_create (
        old && !cJSON_IsNull(old) ? strdup(old->valuestring) : NULL,
        _new && !cJSON_IsNull(_new) ? strdup(_new->valuestring) : NULL
        );

    return _user_change_password_post_request_local_var;
end:
    return NULL;

}
