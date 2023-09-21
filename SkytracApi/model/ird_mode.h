/*
 * ird_mode.h
 *
 * 
 */

#ifndef _ird_mode_H_
#define _ird_mode_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_mode_t ird_mode_t;


// Enum  for ird_mode

typedef enum { quicksilver_web_api_ird_mode__NULL = 0, quicksilver_web_api_ird_mode__inactive, quicksilver_web_api_ird_mode__data } quicksilver_web_api_ird_mode__e;

char* ird_mode_ird_mode_ToString(quicksilver_web_api_ird_mode__e ird_mode);

quicksilver_web_api_ird_mode__e ird_mode_ird_mode_FromString(char* ird_mode);

//cJSON *ird_mode_ird_mode_convertToJSON(quicksilver_web_api_ird_mode__e ird_mode);

//quicksilver_web_api_ird_mode__e ird_mode_ird_mode_parseFromJSON(cJSON *ird_modeJSON);

#endif /* _ird_mode_H_ */

