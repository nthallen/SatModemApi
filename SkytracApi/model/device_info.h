/*
 * device_info.h
 *
 * 
 */

#ifndef _device_info_H_
#define _device_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct device_info_t device_info_t;




typedef struct device_info_t {
    char *version; // string
    char *serial; // string
    char *hw_revision; // string
    char *web_api_version; // string
    char *eth_mac; // string
    char *wifi_mac; // string

} device_info_t;

device_info_t *device_info_create(
    char *version,
    char *serial,
    char *hw_revision,
    char *web_api_version,
    char *eth_mac,
    char *wifi_mac
);

void device_info_free(device_info_t *device_info);

device_info_t *device_info_parseFromJSON(cJSON *device_infoJSON);

cJSON *device_info_convertToJSON(device_info_t *device_info);

#endif /* _device_info_H_ */

