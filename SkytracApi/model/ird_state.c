#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_state.h"


char* ird_state_ird_state_ToString(quicksilver_web_api_ird_state__e ird_state) {
    char *ird_stateArray[] =  { "NULL", "available", "busy", "faulty", "recovery mode", "unsupported api" };
    return ird_stateArray[ird_state];
}

quicksilver_web_api_ird_state__e ird_state_ird_state_FromString(char* ird_state) {
    int stringToReturn = 0;
    char *ird_stateArray[] =  { "NULL", "available", "busy", "faulty", "recovery mode", "unsupported api" };
    size_t sizeofArray = sizeof(ird_stateArray) / sizeof(ird_stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ird_state, ird_stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *ird_state_ird_state_convertToJSON(quicksilver_web_api_ird_state__e ird_state) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "ird_state", ird_state_ird_state_ToString(ird_state)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

quicksilver_web_api_ird_state__e ird_state_ird_state_parseFromJSON(cJSON *ird_stateJSON) {
    quicksilver_web_api_ird_state__e *ird_state = NULL;
    quicksilver_web_api_ird_state__e ird_stateVariable;
    cJSON *ird_stateVar = cJSON_GetObjectItemCaseSensitive(ird_stateJSON, "ird_state");
    if(!cJSON_IsString(ird_stateVar) || (ird_stateVar->valuestring == NULL)){
        goto end;
    }
    ird_stateVariable = ird_state_ird_state_FromString(ird_stateVar->valuestring);
    return ird_stateVariable;
end:
    return 0;
}
