#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "eth_settings_request.h"



eth_settings_request_t *eth_settings_request_create(
    char *addr,
    char *mask,
    eth_settings_request_dhcp_t *dhcp
    ) {
    eth_settings_request_t *eth_settings_request_local_var = malloc(sizeof(eth_settings_request_t));
    if (!eth_settings_request_local_var) {
        return NULL;
    }
    eth_settings_request_local_var->addr = addr;
    eth_settings_request_local_var->mask = mask;
    eth_settings_request_local_var->dhcp = dhcp;

    return eth_settings_request_local_var;
}


void eth_settings_request_free(eth_settings_request_t *eth_settings_request) {
    if(NULL == eth_settings_request){
        return ;
    }
    listEntry_t *listEntry;
    if (eth_settings_request->addr) {
        free(eth_settings_request->addr);
        eth_settings_request->addr = NULL;
    }
    if (eth_settings_request->mask) {
        free(eth_settings_request->mask);
        eth_settings_request->mask = NULL;
    }
    if (eth_settings_request->dhcp) {
        eth_settings_request_dhcp_free(eth_settings_request->dhcp);
        eth_settings_request->dhcp = NULL;
    }
    free(eth_settings_request);
}

cJSON *eth_settings_request_convertToJSON(eth_settings_request_t *eth_settings_request) {
    cJSON *item = cJSON_CreateObject();

    // eth_settings_request->addr
    if(eth_settings_request->addr) {
    if(cJSON_AddStringToObject(item, "addr", eth_settings_request->addr) == NULL) {
    goto fail; //String
    }
    }


    // eth_settings_request->mask
    if(eth_settings_request->mask) {
    if(cJSON_AddStringToObject(item, "mask", eth_settings_request->mask) == NULL) {
    goto fail; //String
    }
    }


    // eth_settings_request->dhcp
    if(eth_settings_request->dhcp) {
    cJSON *dhcp_local_JSON = eth_settings_request_dhcp_convertToJSON(eth_settings_request->dhcp);
    if(dhcp_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dhcp", dhcp_local_JSON);
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

eth_settings_request_t *eth_settings_request_parseFromJSON(cJSON *eth_settings_requestJSON){

    eth_settings_request_t *eth_settings_request_local_var = NULL;

    // define the local variable for eth_settings_request->dhcp
    eth_settings_request_dhcp_t *dhcp_local_nonprim = NULL;

    // eth_settings_request->addr
    cJSON *addr = cJSON_GetObjectItemCaseSensitive(eth_settings_requestJSON, "addr");
    if (addr) { 
    if(!cJSON_IsString(addr) && !cJSON_IsNull(addr))
    {
    goto end; //String
    }
    }

    // eth_settings_request->mask
    cJSON *mask = cJSON_GetObjectItemCaseSensitive(eth_settings_requestJSON, "mask");
    if (mask) { 
    if(!cJSON_IsString(mask) && !cJSON_IsNull(mask))
    {
    goto end; //String
    }
    }

    // eth_settings_request->dhcp
    cJSON *dhcp = cJSON_GetObjectItemCaseSensitive(eth_settings_requestJSON, "dhcp");
    if (dhcp) { 
    dhcp_local_nonprim = eth_settings_request_dhcp_parseFromJSON(dhcp); //nonprimitive
    }


    eth_settings_request_local_var = eth_settings_request_create (
        addr && !cJSON_IsNull(addr) ? strdup(addr->valuestring) : NULL,
        mask && !cJSON_IsNull(mask) ? strdup(mask->valuestring) : NULL,
        dhcp ? dhcp_local_nonprim : NULL
        );

    return eth_settings_request_local_var;
end:
    if (dhcp_local_nonprim) {
        eth_settings_request_dhcp_free(dhcp_local_nonprim);
        dhcp_local_nonprim = NULL;
    }
    return NULL;

}
