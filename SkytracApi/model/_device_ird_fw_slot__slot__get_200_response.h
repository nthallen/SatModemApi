/*
 * _device_ird_fw_slot__slot__get_200_response.h
 *
 * 
 */

#ifndef __device_ird_fw_slot__slot__get_200_response_H_
#define __device_ird_fw_slot__slot__get_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _device_ird_fw_slot__slot__get_200_response_t _device_ird_fw_slot__slot__get_200_response_t;




typedef struct _device_ird_fw_slot__slot__get_200_response_t {
    int valid; //boolean
    char *version; // string
    char *build_info; // string
    char *hash; // string

} _device_ird_fw_slot__slot__get_200_response_t;

_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response_create(
    int valid,
    char *version,
    char *build_info,
    char *hash
);

void _device_ird_fw_slot__slot__get_200_response_free(_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response);

_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response_parseFromJSON(cJSON *_device_ird_fw_slot__slot__get_200_responseJSON);

cJSON *_device_ird_fw_slot__slot__get_200_response_convertToJSON(_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response);

#endif /* __device_ird_fw_slot__slot__get_200_response_H_ */

