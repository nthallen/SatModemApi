#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_settings.h"


char* modeird_settings_ToString(quicksilver_web_api_ird_settings__e mode) {
    char* modeArray[] =  { "NULL", "inactive", "data" };
	return modeArray[mode];
}

quicksilver_web_api_ird_settings__e modeird_settings_FromString(char* mode){
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

ird_settings_t *ird_settings_create(
    ird_mode_t *mode
    ) {
    ird_settings_t *ird_settings_local_var = malloc(sizeof(ird_settings_t));
    if (!ird_settings_local_var) {
        return NULL;
    }
    ird_settings_local_var->mode = mode;

    return ird_settings_local_var;
}


void ird_settings_free(ird_settings_t *ird_settings) {
    if(NULL == ird_settings){
        return ;
    }
    listEntry_t *listEntry;
    if (ird_settings->mode) {
        ird_mode_free(ird_settings->mode);
        ird_settings->mode = NULL;
    }
    free(ird_settings);
}

cJSON *ird_settings_convertToJSON(ird_settings_t *ird_settings) {
    cJSON *item = cJSON_CreateObject();

    // ird_settings->mode
    if (quicksilver_web_api_ird_settings__NULL == ird_settings->mode) {
        goto fail;
    }
    cJSON *mode_local_JSON = ird_mode_convertToJSON(ird_settings->mode);
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

ird_settings_t *ird_settings_parseFromJSON(cJSON *ird_settingsJSON){

    ird_settings_t *ird_settings_local_var = NULL;

    // define the local variable for ird_settings->mode
    ird_mode_t *mode_local_nonprim = NULL;

    // ird_settings->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(ird_settingsJSON, "mode");
    if (!mode) {
        goto end;
    }

    
    mode_local_nonprim = ird_mode_parseFromJSON(mode); //custom


    ird_settings_local_var = ird_settings_create (
        mode_local_nonprim
        );

    return ird_settings_local_var;
end:
    if (mode_local_nonprim) {
        ird_mode_free(mode_local_nonprim);
        mode_local_nonprim = NULL;
    }
    return NULL;

}
