/*
 * configuration_request_ird.h
 *
 * 
 */

#ifndef _configuration_request_ird_H_
#define _configuration_request_ird_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_request_ird_t configuration_request_ird_t;

#include "ird_mode.h"

// Enum  for configuration_request_ird

typedef enum  { quicksilver_web_api_configuration_request_ird__NULL = 0, quicksilver_web_api_configuration_request_ird__inactive, quicksilver_web_api_configuration_request_ird__data } quicksilver_web_api_configuration_request_ird__e;

char* configuration_request_ird_mode_ToString(quicksilver_web_api_configuration_request_ird__e mode);

quicksilver_web_api_configuration_request_ird__e configuration_request_ird_mode_FromString(char* mode);



typedef struct configuration_request_ird_t {
    ird_mode_t *mode; // custom

} configuration_request_ird_t;

configuration_request_ird_t *configuration_request_ird_create(
    ird_mode_t *mode
);

void configuration_request_ird_free(configuration_request_ird_t *configuration_request_ird);

configuration_request_ird_t *configuration_request_ird_parseFromJSON(cJSON *configuration_request_irdJSON);

cJSON *configuration_request_ird_convertToJSON(configuration_request_ird_t *configuration_request_ird);

#endif /* _configuration_request_ird_H_ */

