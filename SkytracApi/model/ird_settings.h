/*
 * ird_settings.h
 *
 * 
 */

#ifndef _ird_settings_H_
#define _ird_settings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_settings_t ird_settings_t;

#include "ird_mode.h"

// Enum  for ird_settings

typedef enum  { quicksilver_web_api_ird_settings__NULL = 0, quicksilver_web_api_ird_settings__inactive, quicksilver_web_api_ird_settings__data } quicksilver_web_api_ird_settings__e;

char* ird_settings_mode_ToString(quicksilver_web_api_ird_settings__e mode);

quicksilver_web_api_ird_settings__e ird_settings_mode_FromString(char* mode);



typedef struct ird_settings_t {
    ird_mode_t *mode; // custom

} ird_settings_t;

ird_settings_t *ird_settings_create(
    ird_mode_t *mode
);

void ird_settings_free(ird_settings_t *ird_settings);

ird_settings_t *ird_settings_parseFromJSON(cJSON *ird_settingsJSON);

cJSON *ird_settings_convertToJSON(ird_settings_t *ird_settings);

#endif /* _ird_settings_H_ */

