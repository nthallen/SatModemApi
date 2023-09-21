/*
 * configuration_response_ird.h
 *
 * 
 */

#ifndef _configuration_response_ird_H_
#define _configuration_response_ird_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_response_ird_t configuration_response_ird_t;

#include "ird_mode.h"

// Enum  for configuration_response_ird

typedef enum  { quicksilver_web_api_configuration_response_ird__NULL = 0, quicksilver_web_api_configuration_response_ird__inactive, quicksilver_web_api_configuration_response_ird__data } quicksilver_web_api_configuration_response_ird__e;

char* configuration_response_ird_mode_ToString(quicksilver_web_api_configuration_response_ird__e mode);

quicksilver_web_api_configuration_response_ird__e configuration_response_ird_mode_FromString(char* mode);



typedef struct configuration_response_ird_t {
    ird_mode_t *mode; // custom

} configuration_response_ird_t;

configuration_response_ird_t *configuration_response_ird_create(
    ird_mode_t *mode
);

void configuration_response_ird_free(configuration_response_ird_t *configuration_response_ird);

configuration_response_ird_t *configuration_response_ird_parseFromJSON(cJSON *configuration_response_irdJSON);

cJSON *configuration_response_ird_convertToJSON(configuration_response_ird_t *configuration_response_ird);

#endif /* _configuration_response_ird_H_ */

