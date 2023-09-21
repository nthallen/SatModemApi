/*
 * configuration_response_gps.h
 *
 * 
 */

#ifndef _configuration_response_gps_H_
#define _configuration_response_gps_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_response_gps_t configuration_response_gps_t;

#include "gps_dyn_platform_model.h"

// Enum  for configuration_response_gps

typedef enum  { quicksilver_web_api_configuration_response_gps__NULL = 0, quicksilver_web_api_configuration_response_gps__portable, quicksilver_web_api_configuration_response_gps__stationary, quicksilver_web_api_configuration_response_gps__pedestrian, quicksilver_web_api_configuration_response_gps__automotive, quicksilver_web_api_configuration_response_gps__sea, quicksilver_web_api_configuration_response_gps__airborneUnder1g, quicksilver_web_api_configuration_response_gps__airborneUnder2g, quicksilver_web_api_configuration_response_gps__airborneUnder4g, quicksilver_web_api_configuration_response_gps__wrist } quicksilver_web_api_configuration_response_gps__e;

char* configuration_response_gps_dyn_platform_model_ToString(quicksilver_web_api_configuration_response_gps__e dyn_platform_model);

quicksilver_web_api_configuration_response_gps__e configuration_response_gps_dyn_platform_model_FromString(char* dyn_platform_model);



typedef struct configuration_response_gps_t {
    int keep_on; //boolean
    int sync_time; //boolean
    gps_dyn_platform_model_t *dyn_platform_model; // custom

} configuration_response_gps_t;

configuration_response_gps_t *configuration_response_gps_create(
    int keep_on,
    int sync_time,
    gps_dyn_platform_model_t *dyn_platform_model
);

void configuration_response_gps_free(configuration_response_gps_t *configuration_response_gps);

configuration_response_gps_t *configuration_response_gps_parseFromJSON(cJSON *configuration_response_gpsJSON);

cJSON *configuration_response_gps_convertToJSON(configuration_response_gps_t *configuration_response_gps);

#endif /* _configuration_response_gps_H_ */

