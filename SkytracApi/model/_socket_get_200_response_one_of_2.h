/*
 * _socket_get_200_response_one_of_2.h
 *
 * 
 */

#ifndef __socket_get_200_response_one_of_2_H_
#define __socket_get_200_response_one_of_2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _socket_get_200_response_one_of_2_t _socket_get_200_response_one_of_2_t;

#include "ird_constellation.h"

// Enum TYPE for _socket_get_200_response_one_of_2

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_event } quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e;

char* _socket_get_200_response_one_of_2_type_ToString(quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e type);

quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e _socket_get_200_response_one_of_2_type_FromString(char* type);

// Enum NAME for _socket_get_200_response_one_of_2

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_2_NAME_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_2_NAME_constellationStateUpdated } quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e;

char* _socket_get_200_response_one_of_2_name_ToString(quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e name);

quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e _socket_get_200_response_one_of_2_name_FromString(char* name);



typedef struct _socket_get_200_response_one_of_2_t {
    quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e type; //enum
    quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e name; //enum
    struct ird_constellation_t *data; //model

} _socket_get_200_response_one_of_2_t;

_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2_create(
    quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e type,
    quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e name,
    ird_constellation_t *data
);

void _socket_get_200_response_one_of_2_free(_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2);

_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2_parseFromJSON(cJSON *_socket_get_200_response_one_of_2JSON);

cJSON *_socket_get_200_response_one_of_2_convertToJSON(_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2);

#endif /* __socket_get_200_response_one_of_2_H_ */

