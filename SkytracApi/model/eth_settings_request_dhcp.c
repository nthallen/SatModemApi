#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "eth_settings_request_dhcp.h"



eth_settings_request_dhcp_t *eth_settings_request_dhcp_create(
    int enabled,
    list_t *ranges
    ) {
    eth_settings_request_dhcp_t *eth_settings_request_dhcp_local_var = malloc(sizeof(eth_settings_request_dhcp_t));
    if (!eth_settings_request_dhcp_local_var) {
        return NULL;
    }
    eth_settings_request_dhcp_local_var->enabled = enabled;
    eth_settings_request_dhcp_local_var->ranges = ranges;

    return eth_settings_request_dhcp_local_var;
}


void eth_settings_request_dhcp_free(eth_settings_request_dhcp_t *eth_settings_request_dhcp) {
    if(NULL == eth_settings_request_dhcp){
        return ;
    }
    listEntry_t *listEntry;
    if (eth_settings_request_dhcp->ranges) {
        list_ForEach(listEntry, eth_settings_request_dhcp->ranges) {
            dhcp_range_free(listEntry->data);
        }
        list_freeList(eth_settings_request_dhcp->ranges);
        eth_settings_request_dhcp->ranges = NULL;
    }
    free(eth_settings_request_dhcp);
}

cJSON *eth_settings_request_dhcp_convertToJSON(eth_settings_request_dhcp_t *eth_settings_request_dhcp) {
    cJSON *item = cJSON_CreateObject();

    // eth_settings_request_dhcp->enabled
    if(eth_settings_request_dhcp->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", eth_settings_request_dhcp->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // eth_settings_request_dhcp->ranges
    if(eth_settings_request_dhcp->ranges) {
    cJSON *ranges = cJSON_AddArrayToObject(item, "ranges");
    if(ranges == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rangesListEntry;
    if (eth_settings_request_dhcp->ranges) {
    list_ForEach(rangesListEntry, eth_settings_request_dhcp->ranges) {
    cJSON *itemLocal = dhcp_range_convertToJSON(rangesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ranges, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

eth_settings_request_dhcp_t *eth_settings_request_dhcp_parseFromJSON(cJSON *eth_settings_request_dhcpJSON){

    eth_settings_request_dhcp_t *eth_settings_request_dhcp_local_var = NULL;

    // define the local list for eth_settings_request_dhcp->ranges
    list_t *rangesList = NULL;

    // eth_settings_request_dhcp->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(eth_settings_request_dhcpJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // eth_settings_request_dhcp->ranges
    cJSON *ranges = cJSON_GetObjectItemCaseSensitive(eth_settings_request_dhcpJSON, "ranges");
    if (ranges) { 
    cJSON *ranges_local_nonprimitive = NULL;
    if(!cJSON_IsArray(ranges)){
        goto end; //nonprimitive container
    }

    rangesList = list_createList();

    cJSON_ArrayForEach(ranges_local_nonprimitive,ranges )
    {
        if(!cJSON_IsObject(ranges_local_nonprimitive)){
            goto end;
        }
        dhcp_range_t *rangesItem = dhcp_range_parseFromJSON(ranges_local_nonprimitive);

        list_addElement(rangesList, rangesItem);
    }
    }


    eth_settings_request_dhcp_local_var = eth_settings_request_dhcp_create (
        enabled ? enabled->valueint : 0,
        ranges ? rangesList : NULL
        );

    return eth_settings_request_dhcp_local_var;
end:
    if (rangesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rangesList) {
            dhcp_range_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rangesList);
        rangesList = NULL;
    }
    return NULL;

}
