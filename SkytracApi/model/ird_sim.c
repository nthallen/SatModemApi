#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_sim.h"


char* presentird_sim_ToString(quicksilver_web_api_ird_sim_PRESENT_e present) {
    char* presentArray[] =  { "NULL", "false", "true", "unknown" };
	return presentArray[present];
}

quicksilver_web_api_ird_sim_PRESENT_e presentird_sim_FromString(char* present){
    int stringToReturn = 0;
    char *presentArray[] =  { "NULL", "false", "true", "unknown" };
    size_t sizeofArray = sizeof(presentArray) / sizeof(presentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(present, presentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ird_sim_t *ird_sim_create(
    quicksilver_web_api_ird_sim_PRESENT_e present,
    int connected,
    char *iccid
    ) {
    ird_sim_t *ird_sim_local_var = malloc(sizeof(ird_sim_t));
    if (!ird_sim_local_var) {
        return NULL;
    }
    ird_sim_local_var->present = present;
    ird_sim_local_var->connected = connected;
    ird_sim_local_var->iccid = iccid;

    return ird_sim_local_var;
}


void ird_sim_free(ird_sim_t *ird_sim) {
    if(NULL == ird_sim){
        return ;
    }
    listEntry_t *listEntry;
    if (ird_sim->iccid) {
        free(ird_sim->iccid);
        ird_sim->iccid = NULL;
    }
    free(ird_sim);
}

cJSON *ird_sim_convertToJSON(ird_sim_t *ird_sim) {
    cJSON *item = cJSON_CreateObject();

    // ird_sim->present
    if (quicksilver_web_api_ird_sim_PRESENT_NULL == ird_sim->present) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "present", presentird_sim_ToString(ird_sim->present)) == NULL)
    {
    goto fail; //Enum
    }


    // ird_sim->connected
    if (!ird_sim->connected) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "connected", ird_sim->connected) == NULL) {
    goto fail; //Bool
    }


    // ird_sim->iccid
    if (!ird_sim->iccid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "iccid", ird_sim->iccid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ird_sim_t *ird_sim_parseFromJSON(cJSON *ird_simJSON){

    ird_sim_t *ird_sim_local_var = NULL;

    // ird_sim->present
    cJSON *present = cJSON_GetObjectItemCaseSensitive(ird_simJSON, "present");
    if (!present) {
        goto end;
    }

    quicksilver_web_api_ird_sim_PRESENT_e presentVariable;
    
    if(!cJSON_IsString(present))
    {
    goto end; //Enum
    }
    presentVariable = presentird_sim_FromString(present->valuestring);

    // ird_sim->connected
    cJSON *connected = cJSON_GetObjectItemCaseSensitive(ird_simJSON, "connected");
    if (!connected) {
        goto end;
    }

    
    if(!cJSON_IsBool(connected))
    {
    goto end; //Bool
    }

    // ird_sim->iccid
    cJSON *iccid = cJSON_GetObjectItemCaseSensitive(ird_simJSON, "iccid");
    if (!iccid) {
        goto end;
    }

    
    if(!cJSON_IsString(iccid))
    {
    goto end; //String
    }


    ird_sim_local_var = ird_sim_create (
        presentVariable,
        connected->valueint,
        strdup(iccid->valuestring)
        );

    return ird_sim_local_var;
end:
    return NULL;

}
