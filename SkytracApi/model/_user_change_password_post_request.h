/*
 * _user_change_password_post_request.h
 *
 * 
 */

#ifndef __user_change_password_post_request_H_
#define __user_change_password_post_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _user_change_password_post_request_t _user_change_password_post_request_t;




typedef struct _user_change_password_post_request_t {
    char *old; // string
    char *_new; // string

} _user_change_password_post_request_t;

_user_change_password_post_request_t *_user_change_password_post_request_create(
    char *old,
    char *_new
);

void _user_change_password_post_request_free(_user_change_password_post_request_t *_user_change_password_post_request);

_user_change_password_post_request_t *_user_change_password_post_request_parseFromJSON(cJSON *_user_change_password_post_requestJSON);

cJSON *_user_change_password_post_request_convertToJSON(_user_change_password_post_request_t *_user_change_password_post_request);

#endif /* __user_change_password_post_request_H_ */

