/*
 * _session_refresh_post_200_response.h
 *
 * 
 */

#ifndef __session_refresh_post_200_response_H_
#define __session_refresh_post_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _session_refresh_post_200_response_t _session_refresh_post_200_response_t;




typedef struct _session_refresh_post_200_response_t {
    char *token; // string
    char *refresh_token; // string

} _session_refresh_post_200_response_t;

_session_refresh_post_200_response_t *_session_refresh_post_200_response_create(
    char *token,
    char *refresh_token
);

void _session_refresh_post_200_response_free(_session_refresh_post_200_response_t *_session_refresh_post_200_response);

_session_refresh_post_200_response_t *_session_refresh_post_200_response_parseFromJSON(cJSON *_session_refresh_post_200_responseJSON);

cJSON *_session_refresh_post_200_response_convertToJSON(_session_refresh_post_200_response_t *_session_refresh_post_200_response);

#endif /* __session_refresh_post_200_response_H_ */

