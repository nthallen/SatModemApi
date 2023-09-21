/*
 * _socket_get_200_response_one_of.h
 *
 * 
 */

#ifndef __socket_get_200_response_one_of_H_
#define __socket_get_200_response_one_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _socket_get_200_response_one_of_t _socket_get_200_response_one_of_t;


// Enum TYPE for _socket_get_200_response_one_of

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_TYPE_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_TYPE_event } quicksilver_web_api__socket_get_200_response_one_of_TYPE_e;

char* _socket_get_200_response_one_of_type_ToString(quicksilver_web_api__socket_get_200_response_one_of_TYPE_e type);

quicksilver_web_api__socket_get_200_response_one_of_TYPE_e _socket_get_200_response_one_of_type_FromString(char* type);

// Enum NAME for _socket_get_200_response_one_of

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_NAME_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_NAME_id } quicksilver_web_api__socket_get_200_response_one_of_NAME_e;

char* _socket_get_200_response_one_of_name_ToString(quicksilver_web_api__socket_get_200_response_one_of_NAME_e name);

quicksilver_web_api__socket_get_200_response_one_of_NAME_e _socket_get_200_response_one_of_name_FromString(char* name);



typedef struct _socket_get_200_response_one_of_t {
    quicksilver_web_api__socket_get_200_response_one_of_TYPE_e type; //enum
    quicksilver_web_api__socket_get_200_response_one_of_NAME_e name; //enum
    char *data; // string

} _socket_get_200_response_one_of_t;

_socket_get_200_response_one_of_t *_socket_get_200_response_one_of_create(
    quicksilver_web_api__socket_get_200_response_one_of_TYPE_e type,
    quicksilver_web_api__socket_get_200_response_one_of_NAME_e name,
    char *data
);

void _socket_get_200_response_one_of_free(_socket_get_200_response_one_of_t *_socket_get_200_response_one_of);

_socket_get_200_response_one_of_t *_socket_get_200_response_one_of_parseFromJSON(cJSON *_socket_get_200_response_one_ofJSON);

cJSON *_socket_get_200_response_one_of_convertToJSON(_socket_get_200_response_one_of_t *_socket_get_200_response_one_of);

#endif /* __socket_get_200_response_one_of_H_ */

