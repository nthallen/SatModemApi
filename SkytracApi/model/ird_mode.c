#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_mode.h"


char* ird_mode_ird_mode_ToString(quicksilver_web_api_ird_mode__e ird_mode) {
    char *ird_modeArray[] =  { "NULL", "inactive", "data" };
    return ird_modeArray[ird_mode];
}

quicksilver_web_api_ird_mode__e ird_mode_ird_mode_FromString(char* ird_mode) {
    int stringToReturn = 0;
    char *ird_modeArray[] =  { "NULL", "inactive", "data" };
    size_t sizeofArray = sizeof(ird_modeArray) / sizeof(ird_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ird_mode, ird_modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *ird_mode_ird_mode_convertToJSON(quicksilver_web_api_ird_mode__e ird_mode) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "ird_mode", ird_mode_ird_mode_ToString(ird_mode)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

quicksilver_web_api_ird_mode__e ird_mode_ird_mode_parseFromJSON(cJSON *ird_modeJSON) {
    quicksilver_web_api_ird_mode__e *ird_mode = NULL;
    quicksilver_web_api_ird_mode__e ird_modeVariable;
    cJSON *ird_modeVar = cJSON_GetObjectItemCaseSensitive(ird_modeJSON, "ird_mode");
    if(!cJSON_IsString(ird_modeVar) || (ird_modeVar->valuestring == NULL)){
        goto end;
    }
    ird_modeVariable = ird_mode_ird_mode_FromString(ird_modeVar->valuestring);
    return ird_modeVariable;
end:
    return 0;
}
