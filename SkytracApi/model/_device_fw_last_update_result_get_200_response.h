/*
 * _device_fw_last_update_result_get_200_response.h
 *
 * 
 */

#ifndef __device_fw_last_update_result_get_200_response_H_
#define __device_fw_last_update_result_get_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _device_fw_last_update_result_get_200_response_t _device_fw_last_update_result_get_200_response_t;




typedef struct _device_fw_last_update_result_get_200_response_t {
    char *version; // string
    int success; //boolean
    char *error; // string

} _device_fw_last_update_result_get_200_response_t;

_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response_create(
    char *version,
    int success,
    char *error
);

void _device_fw_last_update_result_get_200_response_free(_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response);

_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response_parseFromJSON(cJSON *_device_fw_last_update_result_get_200_responseJSON);

cJSON *_device_fw_last_update_result_get_200_response_convertToJSON(_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response);

#endif /* __device_fw_last_update_result_get_200_response_H_ */

