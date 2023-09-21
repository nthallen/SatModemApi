/*
 * cfg_type.h
 *
 * 
 */

#ifndef _cfg_type_H_
#define _cfg_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cfg_type_t cfg_type_t;


// Enum  for cfg_type

typedef enum { quicksilver_web_api_cfg_type__NULL = 0, quicksilver_web_api_cfg_type__runtime, quicksilver_web_api_cfg_type__startup } quicksilver_web_api_cfg_type__e;

char* cfg_type_cfg_type_ToString(quicksilver_web_api_cfg_type__e cfg_type);

quicksilver_web_api_cfg_type__e cfg_type_cfg_type_FromString(char* cfg_type);

//cJSON *cfg_type_cfg_type_convertToJSON(quicksilver_web_api_cfg_type__e cfg_type);

//quicksilver_web_api_cfg_type__e cfg_type_cfg_type_parseFromJSON(cJSON *cfg_typeJSON);

#endif /* _cfg_type_H_ */

