/*
 * ird_state.h
 *
 * The state of Iridium
 */

#ifndef _ird_state_H_
#define _ird_state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_state_t ird_state_t;


// Enum  for ird_state

typedef enum { quicksilver_web_api_ird_state__NULL = 0, quicksilver_web_api_ird_state__available, quicksilver_web_api_ird_state__busy, quicksilver_web_api_ird_state__faulty, quicksilver_web_api_ird_state__recovery_mode, quicksilver_web_api_ird_state__unsupported_api } quicksilver_web_api_ird_state__e;

char* ird_state_ird_state_ToString(quicksilver_web_api_ird_state__e ird_state);

quicksilver_web_api_ird_state__e ird_state_ird_state_FromString(char* ird_state);

//cJSON *ird_state_ird_state_convertToJSON(quicksilver_web_api_ird_state__e ird_state);

//quicksilver_web_api_ird_state__e ird_state_ird_state_parseFromJSON(cJSON *ird_stateJSON);

#endif /* _ird_state_H_ */

