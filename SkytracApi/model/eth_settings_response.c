#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "eth_settings_response.h"



eth_settings_response_t *eth_settings_response_create(
    char *addr,
    char *mask,
    any_type_t *dhcp
    ) {
    eth_settings_response_t *eth_settings_response_local_var = malloc(sizeof(eth_settings_response_t));
    if (!eth_settings_response_local_var) {
        return NULL;
    }
    eth_settings_response_local_var->addr = addr;
    eth_settings_response_local_var->mask = mask;
    eth_settings_response_local_var->dhcp = dhcp;

    return eth_settings_response_local_var;
}


void eth_settings_response_free(eth_settings_response_t *eth_settings_response) {
    if(NULL == eth_settings_response){
        return ;
    }
    listEntry_t *listEntry;
    if (eth_settings_response->addr) {
        free(eth_settings_response->addr);
        eth_settings_response->addr = NULL;
    }
    if (eth_settings_response->mask) {
        free(eth_settings_response->mask);
        eth_settings_response->mask = NULL;
    }
    if (eth_settings_response->dhcp) {
        _free(eth_settings_response->dhcp);
        eth_settings_response->dhcp = NULL;
    }
    free(eth_settings_response);
}

cJSON *eth_settings_response_convertToJSON(eth_settings_response_t *eth_settings_response) {
    cJSON *item = cJSON_CreateObject();

    // eth_settings_response->addr
    if (!eth_settings_response->addr) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "addr", eth_settings_response->addr) == NULL) {
    goto fail; //String
    }


    // eth_settings_response->mask
    if (!eth_settings_response->mask) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mask", eth_settings_response->mask) == NULL) {
    goto fail; //String
    }


    // eth_settings_response->dhcp
    if (!eth_settings_response->dhcp) {
        goto fail;
    }
    cJSON *dhcp_local_JSON = _convertToJSON(eth_settings_response->dhcp);
    if(dhcp_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "dhcp", dhcp_local_JSON);
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

eth_settings_response_t *eth_settings_response_parseFromJSON(cJSON *eth_settings_responseJSON){

    eth_settings_response_t *eth_settings_response_local_var = NULL;

    // define the local variable for eth_settings_response->dhcp
    _t *dhcp_local_nonprim = NULL;

    // eth_settings_response->addr
    cJSON *addr = cJSON_GetObjectItemCaseSensitive(eth_settings_responseJSON, "addr");
    if (!addr) {
        goto end;
    }

    
    if(!cJSON_IsString(addr))
    {
    goto end; //String
    }

    // eth_settings_response->mask
    cJSON *mask = cJSON_GetObjectItemCaseSensitive(eth_settings_responseJSON, "mask");
    if (!mask) {
        goto end;
    }

    
    if(!cJSON_IsString(mask))
    {
    goto end; //String
    }

    // eth_settings_response->dhcp
    cJSON *dhcp = cJSON_GetObjectItemCaseSensitive(eth_settings_responseJSON, "dhcp");
    if (!dhcp) {
        goto end;
    }

    
    dhcp_local_nonprim = _parseFromJSON(dhcp); //custom


    eth_settings_response_local_var = eth_settings_response_create (
        strdup(addr->valuestring),
        strdup(mask->valuestring),
        dhcp_local_nonprim
        );

    return eth_settings_response_local_var;
end:
    if (dhcp_local_nonprim) {
        _free(dhcp_local_nonprim);
        dhcp_local_nonprim = NULL;
    }
    return NULL;

}
