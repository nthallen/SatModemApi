#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "data_usage_entry.h"



data_usage_entry_t *data_usage_entry_create(
    char *start,
    double rx,
    double tx
    ) {
    data_usage_entry_t *data_usage_entry_local_var = malloc(sizeof(data_usage_entry_t));
    if (!data_usage_entry_local_var) {
        return NULL;
    }
    data_usage_entry_local_var->start = start;
    data_usage_entry_local_var->rx = rx;
    data_usage_entry_local_var->tx = tx;

    return data_usage_entry_local_var;
}


void data_usage_entry_free(data_usage_entry_t *data_usage_entry) {
    if(NULL == data_usage_entry){
        return ;
    }
    listEntry_t *listEntry;
    if (data_usage_entry->start) {
        free(data_usage_entry->start);
        data_usage_entry->start = NULL;
    }
    free(data_usage_entry);
}

cJSON *data_usage_entry_convertToJSON(data_usage_entry_t *data_usage_entry) {
    cJSON *item = cJSON_CreateObject();

    // data_usage_entry->start
    if (!data_usage_entry->start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "start", data_usage_entry->start) == NULL) {
    goto fail; //String
    }


    // data_usage_entry->rx
    if (!data_usage_entry->rx) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "rx", data_usage_entry->rx) == NULL) {
    goto fail; //Numeric
    }


    // data_usage_entry->tx
    if (!data_usage_entry->tx) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "tx", data_usage_entry->tx) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

data_usage_entry_t *data_usage_entry_parseFromJSON(cJSON *data_usage_entryJSON){

    data_usage_entry_t *data_usage_entry_local_var = NULL;

    // data_usage_entry->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(data_usage_entryJSON, "start");
    if (!start) {
        goto end;
    }

    
    if(!cJSON_IsString(start))
    {
    goto end; //String
    }

    // data_usage_entry->rx
    cJSON *rx = cJSON_GetObjectItemCaseSensitive(data_usage_entryJSON, "rx");
    if (!rx) {
        goto end;
    }

    
    if(!cJSON_IsNumber(rx))
    {
    goto end; //Numeric
    }

    // data_usage_entry->tx
    cJSON *tx = cJSON_GetObjectItemCaseSensitive(data_usage_entryJSON, "tx");
    if (!tx) {
        goto end;
    }

    
    if(!cJSON_IsNumber(tx))
    {
    goto end; //Numeric
    }


    data_usage_entry_local_var = data_usage_entry_create (
        strdup(start->valuestring),
        rx->valuedouble,
        tx->valuedouble
        );

    return data_usage_entry_local_var;
end:
    return NULL;

}
