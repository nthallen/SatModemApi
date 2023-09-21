/*
 * _sessions_post_201_response.h
 *
 * 
 */

#ifndef __sessions_post_201_response_H_
#define __sessions_post_201_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _sessions_post_201_response_t _sessions_post_201_response_t;




typedef struct _sessions_post_201_response_t {
    char *token; // string
    char *refresh_token; // string

} _sessions_post_201_response_t;

_sessions_post_201_response_t *_sessions_post_201_response_create(
    char *token,
    char *refresh_token
);

void _sessions_post_201_response_free(_sessions_post_201_response_t *_sessions_post_201_response);

_sessions_post_201_response_t *_sessions_post_201_response_parseFromJSON(cJSON *_sessions_post_201_responseJSON);

cJSON *_sessions_post_201_response_convertToJSON(_sessions_post_201_response_t *_sessions_post_201_response);

#endif /* __sessions_post_201_response_H_ */

