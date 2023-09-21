#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gps_dyn_platform_model.h"


char* gps_dyn_platform_model_gps_dyn_platform_model_ToString(quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model) {
    char *gps_dyn_platform_modelArray[] =  { "NULL", "portable", "stationary", "pedestrian", "automotive", "sea", "airborneUnder1g", "airborneUnder2g", "airborneUnder4g", "wrist" };
    return gps_dyn_platform_modelArray[gps_dyn_platform_model];
}

quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model_gps_dyn_platform_model_FromString(char* gps_dyn_platform_model) {
    int stringToReturn = 0;
    char *gps_dyn_platform_modelArray[] =  { "NULL", "portable", "stationary", "pedestrian", "automotive", "sea", "airborneUnder1g", "airborneUnder2g", "airborneUnder4g", "wrist" };
    size_t sizeofArray = sizeof(gps_dyn_platform_modelArray) / sizeof(gps_dyn_platform_modelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(gps_dyn_platform_model, gps_dyn_platform_modelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *gps_dyn_platform_model_gps_dyn_platform_model_convertToJSON(quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "gps_dyn_platform_model", gps_dyn_platform_model_gps_dyn_platform_model_ToString(gps_dyn_platform_model)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_model_gps_dyn_platform_model_parseFromJSON(cJSON *gps_dyn_platform_modelJSON) {
    quicksilver_web_api_gps_dyn_platform_model__e *gps_dyn_platform_model = NULL;
    quicksilver_web_api_gps_dyn_platform_model__e gps_dyn_platform_modelVariable;
    cJSON *gps_dyn_platform_modelVar = cJSON_GetObjectItemCaseSensitive(gps_dyn_platform_modelJSON, "gps_dyn_platform_model");
    if(!cJSON_IsString(gps_dyn_platform_modelVar) || (gps_dyn_platform_modelVar->valuestring == NULL)){
        goto end;
    }
    gps_dyn_platform_modelVariable = gps_dyn_platform_model_gps_dyn_platform_model_FromString(gps_dyn_platform_modelVar->valuestring);
    return gps_dyn_platform_modelVariable;
end:
    return 0;
}
