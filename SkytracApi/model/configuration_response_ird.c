#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "configuration_response_ird.h"


char* modeconfiguration_response_ird_ToString(quicksilver_web_api_configuration_response_ird__e mode) {
    char* modeArray[] =  { "NULL", "inactive", "data" };
	return modeArray[mode];
}

quicksilver_web_api_configuration_response_ird__e modeconfiguration_response_ird_FromString(char* mode){
    int stringToReturn = 0;
    char *modeArray[] =  { "NULL", "inactive", "data" };
    size_t sizeofArray = sizeof(modeArray) / sizeof(modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(mode, modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

configuration_response_ird_t *configuration_response_ird_create(
    ird_mode_t *mode
    ) {
    configuration_response_ird_t *configuration_response_ird_local_var = malloc(sizeof(configuration_response_ird_t));
    if (!configuration_response_ird_local_var) {
        return NULL;
    }
    configuration_response_ird_local_var->mode = mode;

    return configuration_response_ird_local_var;
}


void configuration_response_ird_free(configuration_response_ird_t *configuration_response_ird) {
    if(NULL == configuration_response_ird){
        return ;
    }
    listEntry_t *listEntry;
    if (configuration_response_ird->mode) {
        ird_mode_free(configuration_response_ird->mode);
        configuration_response_ird->mode = NULL;
    }
    free(configuration_response_ird);
}

cJSON *configuration_response_ird_convertToJSON(configuration_response_ird_t *configuration_response_ird) {
    cJSON *item = cJSON_CreateObject();

    // configuration_response_ird->mode
    if (quicksilver_web_api_configuration_response_ird__NULL == configuration_response_ird->mode) {
        goto fail;
    }
    cJSON *mode_local_JSON = ird_mode_convertToJSON(configuration_response_ird->mode);
    if(mode_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "mode", mode_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

configuration_response_ird_t *configuration_response_ird_parseFromJSON(cJSON *configuration_response_irdJSON){

    configuration_response_ird_t *configuration_response_ird_local_var = NULL;

    // define the local variable for configuration_response_ird->mode
    ird_mode_t *mode_local_nonprim = NULL;

    // configuration_response_ird->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(configuration_response_irdJSON, "mode");
    if (!mode) {
        goto end;
    }

    
    mode_local_nonprim = ird_mode_parseFromJSON(mode); //custom


    configuration_response_ird_local_var = configuration_response_ird_create (
        mode_local_nonprim
        );

    return configuration_response_ird_local_var;
end:
    if (mode_local_nonprim) {
        ird_mode_free(mode_local_nonprim);
        mode_local_nonprim = NULL;
    }
    return NULL;

}
