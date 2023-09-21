/*
 * _socket_get_200_response_one_of_1.h
 *
 * 
 */

#ifndef __socket_get_200_response_one_of_1_H_
#define __socket_get_200_response_one_of_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _socket_get_200_response_one_of_1_t _socket_get_200_response_one_of_1_t;

#include "notification.h"

// Enum TYPE for _socket_get_200_response_one_of_1

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_event } quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_e;

char* _socket_get_200_response_one_of_1_type_ToString(quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_e type);

quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_e _socket_get_200_response_one_of_1_type_FromString(char* type);

// Enum NAME for _socket_get_200_response_one_of_1

typedef enum  { quicksilver_web_api__socket_get_200_response_one_of_1_NAME_NULL = 0, quicksilver_web_api__socket_get_200_response_one_of_1_NAME_notificationAdded } quicksilver_web_api__socket_get_200_response_one_of_1_NAME_e;

char* _socket_get_200_response_one_of_1_name_ToString(quicksilver_web_api__socket_get_200_response_one_of_1_NAME_e name);

quicksilver_web_api__socket_get_200_response_one_of_1_NAME_e _socket_get_200_response_one_of_1_name_FromString(char* name);



typedef struct _socket_get_200_response_one_of_1_t {
    quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_e type; //enum
    quicksilver_web_api__socket_get_200_response_one_of_1_NAME_e name; //enum
    struct notification_t *data; //model

} _socket_get_200_response_one_of_1_t;

_socket_get_200_response_one_of_1_t *_socket_get_200_response_one_of_1_create(
    quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_e type,
    quicksilver_web_api__socket_get_200_response_one_of_1_NAME_e name,
    notification_t *data
);

void _socket_get_200_response_one_of_1_free(_socket_get_200_response_one_of_1_t *_socket_get_200_response_one_of_1);

_socket_get_200_response_one_of_1_t *_socket_get_200_response_one_of_1_parseFromJSON(cJSON *_socket_get_200_response_one_of_1JSON);

cJSON *_socket_get_200_response_one_of_1_convertToJSON(_socket_get_200_response_one_of_1_t *_socket_get_200_response_one_of_1);

#endif /* __socket_get_200_response_one_of_1_H_ */

