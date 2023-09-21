#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "configuration_response_port_fwd.h"



configuration_response_port_fwd_t *configuration_response_port_fwd_create(
    list_t *entries
    ) {
    configuration_response_port_fwd_t *configuration_response_port_fwd_local_var = malloc(sizeof(configuration_response_port_fwd_t));
    if (!configuration_response_port_fwd_local_var) {
        return NULL;
    }
    configuration_response_port_fwd_local_var->entries = entries;

    return configuration_response_port_fwd_local_var;
}


void configuration_response_port_fwd_free(configuration_response_port_fwd_t *configuration_response_port_fwd) {
    if(NULL == configuration_response_port_fwd){
        return ;
    }
    listEntry_t *listEntry;
    if (configuration_response_port_fwd->entries) {
        list_ForEach(listEntry, configuration_response_port_fwd->entries) {
            port_fwd_entry_free(listEntry->data);
        }
        list_freeList(configuration_response_port_fwd->entries);
        configuration_response_port_fwd->entries = NULL;
    }
    free(configuration_response_port_fwd);
}

cJSON *configuration_response_port_fwd_convertToJSON(configuration_response_port_fwd_t *configuration_response_port_fwd) {
    cJSON *item = cJSON_CreateObject();

    // configuration_response_port_fwd->entries
    if (!configuration_response_port_fwd->entries) {
        goto fail;
    }
    cJSON *entries = cJSON_AddArrayToObject(item, "entries");
    if(entries == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *entriesListEntry;
    if (configuration_response_port_fwd->entries) {
    list_ForEach(entriesListEntry, configuration_response_port_fwd->entries) {
    cJSON *itemLocal = port_fwd_entry_convertToJSON(entriesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(entries, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

configuration_response_port_fwd_t *configuration_response_port_fwd_parseFromJSON(cJSON *configuration_response_port_fwdJSON){

    configuration_response_port_fwd_t *configuration_response_port_fwd_local_var = NULL;

    // define the local list for configuration_response_port_fwd->entries
    list_t *entriesList = NULL;

    // configuration_response_port_fwd->entries
    cJSON *entries = cJSON_GetObjectItemCaseSensitive(configuration_response_port_fwdJSON, "entries");
    if (!entries) {
        goto end;
    }

    
    cJSON *entries_local_nonprimitive = NULL;
    if(!cJSON_IsArray(entries)){
        goto end; //nonprimitive container
    }

    entriesList = list_createList();

    cJSON_ArrayForEach(entries_local_nonprimitive,entries )
    {
        if(!cJSON_IsObject(entries_local_nonprimitive)){
            goto end;
        }
        port_fwd_entry_t *entriesItem = port_fwd_entry_parseFromJSON(entries_local_nonprimitive);

        list_addElement(entriesList, entriesItem);
    }


    configuration_response_port_fwd_local_var = configuration_response_port_fwd_create (
        entriesList
        );

    return configuration_response_port_fwd_local_var;
end:
    if (entriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, entriesList) {
            port_fwd_entry_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(entriesList);
        entriesList = NULL;
    }
    return NULL;

}
