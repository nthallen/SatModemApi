#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "configuration_request_gps.h"


char* dyn_platform_modelconfiguration_request_gps_ToString(quicksilver_web_api_configuration_request_gps__e dyn_platform_model) {
    char* dyn_platform_modelArray[] =  { "NULL", "portable", "stationary", "pedestrian", "automotive", "sea", "airborneUnder1g", "airborneUnder2g", "airborneUnder4g", "wrist" };
	return dyn_platform_modelArray[dyn_platform_model];
}

quicksilver_web_api_configuration_request_gps__e dyn_platform_modelconfiguration_request_gps_FromString(char* dyn_platform_model){
    int stringToReturn = 0;
    char *dyn_platform_modelArray[] =  { "NULL", "portable", "stationary", "pedestrian", "automotive", "sea", "airborneUnder1g", "airborneUnder2g", "airborneUnder4g", "wrist" };
    size_t sizeofArray = sizeof(dyn_platform_modelArray) / sizeof(dyn_platform_modelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(dyn_platform_model, dyn_platform_modelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

configuration_request_gps_t *configuration_request_gps_create(
    int keep_on,
    int sync_time,
    gps_dyn_platform_model_t *dyn_platform_model
    ) {
    configuration_request_gps_t *configuration_request_gps_local_var = malloc(sizeof(configuration_request_gps_t));
    if (!configuration_request_gps_local_var) {
        return NULL;
    }
    configuration_request_gps_local_var->keep_on = keep_on;
    configuration_request_gps_local_var->sync_time = sync_time;
    configuration_request_gps_local_var->dyn_platform_model = dyn_platform_model;

    return configuration_request_gps_local_var;
}


void configuration_request_gps_free(configuration_request_gps_t *configuration_request_gps) {
    if(NULL == configuration_request_gps){
        return ;
    }
    listEntry_t *listEntry;
    if (configuration_request_gps->dyn_platform_model) {
        gps_dyn_platform_model_free(configuration_request_gps->dyn_platform_model);
        configuration_request_gps->dyn_platform_model = NULL;
    }
    free(configuration_request_gps);
}

cJSON *configuration_request_gps_convertToJSON(configuration_request_gps_t *configuration_request_gps) {
    cJSON *item = cJSON_CreateObject();

    // configuration_request_gps->keep_on
    if(configuration_request_gps->keep_on) {
    if(cJSON_AddBoolToObject(item, "keepOn", configuration_request_gps->keep_on) == NULL) {
    goto fail; //Bool
    }
    }


    // configuration_request_gps->sync_time
    if(configuration_request_gps->sync_time) {
    if(cJSON_AddBoolToObject(item, "syncTime", configuration_request_gps->sync_time) == NULL) {
    goto fail; //Bool
    }
    }


    // configuration_request_gps->dyn_platform_model
    if(configuration_request_gps->dyn_platform_model != quicksilver_web_api_configuration_request_gps__NULL) {
    cJSON *dyn_platform_model_local_JSON = gps_dyn_platform_model_convertToJSON(configuration_request_gps->dyn_platform_model);
    if(dyn_platform_model_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "dynPlatformModel", dyn_platform_model_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

configuration_request_gps_t *configuration_request_gps_parseFromJSON(cJSON *configuration_request_gpsJSON){

    configuration_request_gps_t *configuration_request_gps_local_var = NULL;

    // define the local variable for configuration_request_gps->dyn_platform_model
    gps_dyn_platform_model_t *dyn_platform_model_local_nonprim = NULL;

    // configuration_request_gps->keep_on
    cJSON *keep_on = cJSON_GetObjectItemCaseSensitive(configuration_request_gpsJSON, "keepOn");
    if (keep_on) { 
    if(!cJSON_IsBool(keep_on))
    {
    goto end; //Bool
    }
    }

    // configuration_request_gps->sync_time
    cJSON *sync_time = cJSON_GetObjectItemCaseSensitive(configuration_request_gpsJSON, "syncTime");
    if (sync_time) { 
    if(!cJSON_IsBool(sync_time))
    {
    goto end; //Bool
    }
    }

    // configuration_request_gps->dyn_platform_model
    cJSON *dyn_platform_model = cJSON_GetObjectItemCaseSensitive(configuration_request_gpsJSON, "dynPlatformModel");
    if (dyn_platform_model) { 
    dyn_platform_model_local_nonprim = gps_dyn_platform_model_parseFromJSON(dyn_platform_model); //custom
    }


    configuration_request_gps_local_var = configuration_request_gps_create (
        keep_on ? keep_on->valueint : 0,
        sync_time ? sync_time->valueint : 0,
        dyn_platform_model ? dyn_platform_model_local_nonprim : NULL
        );

    return configuration_request_gps_local_var;
end:
    if (dyn_platform_model_local_nonprim) {
        gps_dyn_platform_model_free(dyn_platform_model_local_nonprim);
        dyn_platform_model_local_nonprim = NULL;
    }
    return NULL;

}
