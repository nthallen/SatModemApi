/*
 * _device_fw_update_post_200_response.h
 *
 * 
 */

#ifndef __device_fw_update_post_200_response_H_
#define __device_fw_update_post_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _device_fw_update_post_200_response_t _device_fw_update_post_200_response_t;


// Enum STATUS for _device_fw_update_post_200_response

typedef enum  { quicksilver_web_api__device_fw_update_post_200_response_STATUS_NULL = 0, quicksilver_web_api__device_fw_update_post_200_response_STATUS_started, quicksilver_web_api__device_fw_update_post_200_response_STATUS_partial, quicksilver_web_api__device_fw_update_post_200_response_STATUS_failed, quicksilver_web_api__device_fw_update_post_200_response_STATUS_success } quicksilver_web_api__device_fw_update_post_200_response_STATUS_e;

char* _device_fw_update_post_200_response_status_ToString(quicksilver_web_api__device_fw_update_post_200_response_STATUS_e status);

quicksilver_web_api__device_fw_update_post_200_response_STATUS_e _device_fw_update_post_200_response_status_FromString(char* status);



typedef struct _device_fw_update_post_200_response_t {
    quicksilver_web_api__device_fw_update_post_200_response_STATUS_e status; //enum
    char *error; // string
    int will_reboot; //boolean

} _device_fw_update_post_200_response_t;

_device_fw_update_post_200_response_t *_device_fw_update_post_200_response_create(
    quicksilver_web_api__device_fw_update_post_200_response_STATUS_e status,
    char *error,
    int will_reboot
);

void _device_fw_update_post_200_response_free(_device_fw_update_post_200_response_t *_device_fw_update_post_200_response);

_device_fw_update_post_200_response_t *_device_fw_update_post_200_response_parseFromJSON(cJSON *_device_fw_update_post_200_responseJSON);

cJSON *_device_fw_update_post_200_response_convertToJSON(_device_fw_update_post_200_response_t *_device_fw_update_post_200_response);

#endif /* __device_fw_update_post_200_response_H_ */

