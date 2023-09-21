/*
 * _socket_get_200_response_one_of_3.h
 *
 * 
 */

#ifndef __socket_get_200_response_one_of_3_H_
#define __socket_get_200_response_one_of_3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _socket_get_200_response_one_of_3_t _socket_get_200_response_one_of_3_t;

#include "gps_fix.h"

// Enum TYPE for _socket_get_200_response_one_of_3

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_event } quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_e;

char* _socket_get_200_response_one_of_3_type_ToString(quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_e type);

quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_e _socket_get_200_response_one_of_3_type_FromString(char* type);

// Enum NAME for _socket_get_200_response_one_of_3

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_3_NAME_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_3_NAME_gpsUpdated } quicksilver_web_api__socket_get_200_response_one_of_3_NAME_e;

char* _socket_get_200_response_one_of_3_name_ToString(quicksilver_web_api__socket_get_200_response_one_of_3_NAME_e name);

quicksilver_web_api__socket_get_200_response_one_of_3_NAME_e _socket_get_200_response_one_of_3_name_FromString(char* name);



typedef struct _socket_get_200_response_one_of_3_t {
    quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_e type; //enum
    quicksilver_web_api__socket_get_200_response_one_of_3_NAME_e name; //enum
    struct gps_fix_t *data; //model

} _socket_get_200_response_one_of_3_t;

_socket_get_200_response_one_of_3_t *_socket_get_200_response_one_of_3_create(
    quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_e type,
    quicksilver_web_api__socket_get_200_response_one_of_3_NAME_e name,
    gps_fix_t *data
);

void _socket_get_200_response_one_of_3_free(_socket_get_200_response_one_of_3_t *_socket_get_200_response_one_of_3);

_socket_get_200_response_one_of_3_t *_socket_get_200_response_one_of_3_parseFromJSON(cJSON *_socket_get_200_response_one_of_3JSON);

cJSON *_socket_get_200_response_one_of_3_convertToJSON(_socket_get_200_response_one_of_3_t *_socket_get_200_response_one_of_3);

#endif /* __socket_get_200_response_one_of_3_H_ */

