#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cfg_type.h"


char* cfg_type_cfg_type_ToString(quicksilver_web_api_cfg_type__e cfg_type) {
    char *cfg_typeArray[] =  { "NULL", "runtime", "startup" };
    return cfg_typeArray[cfg_type];
}

quicksilver_web_api_cfg_type__e cfg_type_cfg_type_FromString(char* cfg_type) {
    int stringToReturn = 0;
    char *cfg_typeArray[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(cfg_typeArray) / sizeof(cfg_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(cfg_type, cfg_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *cfg_type_cfg_type_convertToJSON(quicksilver_web_api_cfg_type__e cfg_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "cfg_type", cfg_type_cfg_type_ToString(cfg_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

quicksilver_web_api_cfg_type__e cfg_type_cfg_type_parseFromJSON(cJSON *cfg_typeJSON) {
    quicksilver_web_api_cfg_type__e *cfg_type = NULL;
    quicksilver_web_api_cfg_type__e cfg_typeVariable;
    cJSON *cfg_typeVar = cJSON_GetObjectItemCaseSensitive(cfg_typeJSON, "cfg_type");
    if(!cJSON_IsString(cfg_typeVar) || (cfg_typeVar->valuestring == NULL)){
        goto end;
    }
    cfg_typeVariable = cfg_type_cfg_type_FromString(cfg_typeVar->valuestring);
    return cfg_typeVariable;
end:
    return 0;
}
