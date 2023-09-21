/*
 * event_name.h
 *
 * Event name
 */

#ifndef _event_name_H_
#define _event_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct event_name_t event_name_t;


// Enum  for event_name

typedef enum { quicksilver_web_api_event_name__NULL = 0, quicksilver_web_api_event_name__constellationStateUpdated, quicksilver_web_api_event_name__gpsUpdated, quicksilver_web_api_event_name__notificationAdded } quicksilver_web_api_event_name__e;

char* event_name_event_name_ToString(quicksilver_web_api_event_name__e event_name);

quicksilver_web_api_event_name__e event_name_event_name_FromString(char* event_name);

//cJSON *event_name_event_name_convertToJSON(quicksilver_web_api_event_name__e event_name);

//quicksilver_web_api_event_name__e event_name_event_name_parseFromJSON(cJSON *event_nameJSON);

#endif /* _event_name_H_ */

