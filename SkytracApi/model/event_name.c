#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "event_name.h"


char* event_name_event_name_ToString(quicksilver_web_api_event_name__e event_name) {
    char *event_nameArray[] =  { "NULL", "constellationStateUpdated", "gpsUpdated", "notificationAdded" };
    return event_nameArray[event_name];
}

quicksilver_web_api_event_name__e event_name_event_name_FromString(char* event_name) {
    int stringToReturn = 0;
    char *event_nameArray[] =  { "NULL", "constellationStateUpdated", "gpsUpdated", "notificationAdded" };
    size_t sizeofArray = sizeof(event_nameArray) / sizeof(event_nameArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(event_name, event_nameArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *event_name_event_name_convertToJSON(quicksilver_web_api_event_name__e event_name) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "event_name", event_name_event_name_ToString(event_name)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

quicksilver_web_api_event_name__e event_name_event_name_parseFromJSON(cJSON *event_nameJSON) {
    quicksilver_web_api_event_name__e *event_name = NULL;
    quicksilver_web_api_event_name__e event_nameVariable;
    cJSON *event_nameVar = cJSON_GetObjectItemCaseSensitive(event_nameJSON, "event_name");
    if(!cJSON_IsString(event_nameVar) || (event_nameVar->valuestring == NULL)){
        goto end;
    }
    event_nameVariable = event_name_event_name_FromString(event_nameVar->valuestring);
    return event_nameVariable;
end:
    return 0;
}
