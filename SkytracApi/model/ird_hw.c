#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_hw.h"



ird_hw_t *ird_hw_create(
    char *version,
    char *serial,
    char *imei,
    double pa_temp,
    double board_temp
    ) {
    ird_hw_t *ird_hw_local_var = malloc(sizeof(ird_hw_t));
    if (!ird_hw_local_var) {
        return NULL;
    }
    ird_hw_local_var->version = version;
    ird_hw_local_var->serial = serial;
    ird_hw_local_var->imei = imei;
    ird_hw_local_var->pa_temp = pa_temp;
    ird_hw_local_var->board_temp = board_temp;

    return ird_hw_local_var;
}


void ird_hw_free(ird_hw_t *ird_hw) {
    if(NULL == ird_hw){
        return ;
    }
    listEntry_t *listEntry;
    if (ird_hw->version) {
        free(ird_hw->version);
        ird_hw->version = NULL;
    }
    if (ird_hw->serial) {
        free(ird_hw->serial);
        ird_hw->serial = NULL;
    }
    if (ird_hw->imei) {
        free(ird_hw->imei);
        ird_hw->imei = NULL;
    }
    free(ird_hw);
}

cJSON *ird_hw_convertToJSON(ird_hw_t *ird_hw) {
    cJSON *item = cJSON_CreateObject();

    // ird_hw->version
    if (!ird_hw->version) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "version", ird_hw->version) == NULL) {
    goto fail; //String
    }


    // ird_hw->serial
    if (!ird_hw->serial) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "serial", ird_hw->serial) == NULL) {
    goto fail; //String
    }


    // ird_hw->imei
    if (!ird_hw->imei) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "imei", ird_hw->imei) == NULL) {
    goto fail; //String
    }


    // ird_hw->pa_temp
    if (!ird_hw->pa_temp) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "paTemp", ird_hw->pa_temp) == NULL) {
    goto fail; //Numeric
    }


    // ird_hw->board_temp
    if (!ird_hw->board_temp) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "boardTemp", ird_hw->board_temp) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ird_hw_t *ird_hw_parseFromJSON(cJSON *ird_hwJSON){

    ird_hw_t *ird_hw_local_var = NULL;

    // ird_hw->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(ird_hwJSON, "version");
    if (!version) {
        goto end;
    }

    
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }

    // ird_hw->serial
    cJSON *serial = cJSON_GetObjectItemCaseSensitive(ird_hwJSON, "serial");
    if (!serial) {
        goto end;
    }

    
    if(!cJSON_IsString(serial))
    {
    goto end; //String
    }

    // ird_hw->imei
    cJSON *imei = cJSON_GetObjectItemCaseSensitive(ird_hwJSON, "imei");
    if (!imei) {
        goto end;
    }

    
    if(!cJSON_IsString(imei))
    {
    goto end; //String
    }

    // ird_hw->pa_temp
    cJSON *pa_temp = cJSON_GetObjectItemCaseSensitive(ird_hwJSON, "paTemp");
    if (!pa_temp) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pa_temp))
    {
    goto end; //Numeric
    }

    // ird_hw->board_temp
    cJSON *board_temp = cJSON_GetObjectItemCaseSensitive(ird_hwJSON, "boardTemp");
    if (!board_temp) {
        goto end;
    }

    
    if(!cJSON_IsNumber(board_temp))
    {
    goto end; //Numeric
    }


    ird_hw_local_var = ird_hw_create (
        strdup(version->valuestring),
        strdup(serial->valuestring),
        strdup(imei->valuestring),
        pa_temp->valuedouble,
        board_temp->valuedouble
        );

    return ird_hw_local_var;
end:
    return NULL;

}
