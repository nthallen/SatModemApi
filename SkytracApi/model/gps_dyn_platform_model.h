/*
 * gps_dyn_platform_model.h
 *
 * 
 */

#ifndef _gps_dyn_platform_model_H_
#define _gps_dyn_platform_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gps_dyn_platform_model_t gps_dyn_platform_model_t;


// Enum  for gps_dyn_platform_model

typedef enum { quicksilver_web_api_gps_dyn_platform_model__NULL = 0, quicksilver_web_api_gps_dyn_platform_model__portable, quicksilver_web_api_gps_dyn_platform_model__stationary, quicksilver_web_api_gps_dyn_platform_model__pedestrian, quicksilver_web_api_gps_dyn_platform_model__automotive, quicksilver_web_api_gps_dyn_platform_model__sea, quicksilver_web_api_gps_dyn_platform_model__airborneUnder1g, quicksilver_web_api_gps_dyn_platform_model__airborneUnder2g, quicksilver_web_api_gps_dyn_platform_model__airborneUnder4g, quicksilver_web_api_gps_dyn_platform_model__wrist } quicksilver_web_api_gps_dyn_platform_model__e;

char* gps_dyn_platform_model_gps_dyn_platform_model_ToString(quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model);

quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model_gps_dyn_platform_model_FromString(char* gps_dyn_platform_model);

//cJSON *gps_dyn_platform_model_gps_dyn_platform_model_convertToJSON(quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model);

//quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model_gps_dyn_platform_model_parseFromJSON(cJSON *gps_dyn_platform_modelJSON);

#endif /* _gps_dyn_platform_model_H_ */

