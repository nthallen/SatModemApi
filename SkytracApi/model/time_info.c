#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "time_info.h"



time_info_t *time_info_create(
    double system,
    double uptime
    ) {
    time_info_t *time_info_local_var = malloc(sizeof(time_info_t));
    if (!time_info_local_var) {
        return NULL;
    }
    time_info_local_var->system = system;
    time_info_local_var->uptime = uptime;

    return time_info_local_var;
}


void time_info_free(time_info_t *time_info) {
    if(NULL == time_info){
        return ;
    }
    listEntry_t *listEntry;
    free(time_info);
}

cJSON *time_info_convertToJSON(time_info_t *time_info) {
    cJSON *item = cJSON_CreateObject();

    // time_info->system
    if (!time_info->system) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "system", time_info->system) == NULL) {
    goto fail; //Numeric
    }


    // time_info->uptime
    if (!time_info->uptime) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "uptime", time_info->uptime) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

time_info_t *time_info_parseFromJSON(cJSON *time_infoJSON){

    time_info_t *time_info_local_var = NULL;

    // time_info->system
    cJSON *system = cJSON_GetObjectItemCaseSensitive(time_infoJSON, "system");
    if (!system) {
        goto end;
    }

    
    if(!cJSON_IsNumber(system))
    {
    goto end; //Numeric
    }

    // time_info->uptime
    cJSON *uptime = cJSON_GetObjectItemCaseSensitive(time_infoJSON, "uptime");
    if (!uptime) {
        goto end;
    }

    
    if(!cJSON_IsNumber(uptime))
    {
    goto end; //Numeric
    }


    time_info_local_var = time_info_create (
        system->valuedouble,
        uptime->valuedouble
        );

    return time_info_local_var;
end:
    return NULL;

}
