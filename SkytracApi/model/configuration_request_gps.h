/*
 * configuration_request_gps.h
 *
 * 
 */

#ifndef _configuration_request_gps_H_
#define _configuration_request_gps_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_request_gps_t configuration_request_gps_t;

#include "gps_dyn_platform_model.h"

// Enum  for configuration_request_gps

typedef enum  { quicksilver_web_api_configuration_request_gps__NULL = 0, quicksilver_web_api_configuration_request_gps__portable, quicksilver_web_api_configuration_request_gps__stationary, quicksilver_web_api_configuration_request_gps__pedestrian, quicksilver_web_api_configuration_request_gps__automotive, quicksilver_web_api_configuration_request_gps__sea, quicksilver_web_api_configuration_request_gps__airborneUnder1g, quicksilver_web_api_configuration_request_gps__airborneUnder2g, quicksilver_web_api_configuration_request_gps__airborneUnder4g, quicksilver_web_api_configuration_request_gps__wrist } quicksilver_web_api_configuration_request_gps__e;

char* configuration_request_gps_dyn_platform_model_ToString(quicksilver_web_api_configuration_request_gps__e dyn_platform_model);

quicksilver_web_api_configuration_request_gps__e configuration_request_gps_dyn_platform_model_FromString(char* dyn_platform_model);



typedef struct configuration_request_gps_t {
    int keep_on; //boolean
    int sync_time; //boolean
    gps_dyn_platform_model_t *dyn_platform_model; // custom

} configuration_request_gps_t;

configuration_request_gps_t *configuration_request_gps_create(
    int keep_on,
    int sync_time,
    gps_dyn_platform_model_t *dyn_platform_model
);

void configuration_request_gps_free(configuration_request_gps_t *configuration_request_gps);

configuration_request_gps_t *configuration_request_gps_parseFromJSON(cJSON *configuration_request_gpsJSON);

cJSON *configuration_request_gps_convertToJSON(configuration_request_gps_t *configuration_request_gps);

#endif /* _configuration_request_gps_H_ */

