#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "device_info.h"



device_info_t *device_info_create(
    char *version,
    char *serial,
    char *hw_revision,
    char *web_api_version,
    char *eth_mac,
    char *wifi_mac
    ) {
    device_info_t *device_info_local_var = malloc(sizeof(device_info_t));
    if (!device_info_local_var) {
        return NULL;
    }
    device_info_local_var->version = version;
    device_info_local_var->serial = serial;
    device_info_local_var->hw_revision = hw_revision;
    device_info_local_var->web_api_version = web_api_version;
    device_info_local_var->eth_mac = eth_mac;
    device_info_local_var->wifi_mac = wifi_mac;

    return device_info_local_var;
}


void device_info_free(device_info_t *device_info) {
    if(NULL == device_info){
        return ;
    }
    listEntry_t *listEntry;
    if (device_info->version) {
        free(device_info->version);
        device_info->version = NULL;
    }
    if (device_info->serial) {
        free(device_info->serial);
        device_info->serial = NULL;
    }
    if (device_info->hw_revision) {
        free(device_info->hw_revision);
        device_info->hw_revision = NULL;
    }
    if (device_info->web_api_version) {
        free(device_info->web_api_version);
        device_info->web_api_version = NULL;
    }
    if (device_info->eth_mac) {
        free(device_info->eth_mac);
        device_info->eth_mac = NULL;
    }
    if (device_info->wifi_mac) {
        free(device_info->wifi_mac);
        device_info->wifi_mac = NULL;
    }
    free(device_info);
}

cJSON *device_info_convertToJSON(device_info_t *device_info) {
    cJSON *item = cJSON_CreateObject();

    // device_info->version
    if (!device_info->version) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "version", device_info->version) == NULL) {
    goto fail; //String
    }


    // device_info->serial
    if (!device_info->serial) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "serial", device_info->serial) == NULL) {
    goto fail; //String
    }


    // device_info->hw_revision
    if (!device_info->hw_revision) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hwRevision", device_info->hw_revision) == NULL) {
    goto fail; //String
    }


    // device_info->web_api_version
    if (!device_info->web_api_version) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "webApiVersion", device_info->web_api_version) == NULL) {
    goto fail; //String
    }


    // device_info->eth_mac
    if (!device_info->eth_mac) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ethMac", device_info->eth_mac) == NULL) {
    goto fail; //String
    }


    // device_info->wifi_mac
    if (!device_info->wifi_mac) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "wifiMac", device_info->wifi_mac) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

device_info_t *device_info_parseFromJSON(cJSON *device_infoJSON){

    device_info_t *device_info_local_var = NULL;

    // device_info->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(device_infoJSON, "version");
    if (!version) {
        goto end;
    }

    
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }

    // device_info->serial
    cJSON *serial = cJSON_GetObjectItemCaseSensitive(device_infoJSON, "serial");
    if (!serial) {
        goto end;
    }

    
    if(!cJSON_IsString(serial))
    {
    goto end; //String
    }

    // device_info->hw_revision
    cJSON *hw_revision = cJSON_GetObjectItemCaseSensitive(device_infoJSON, "hwRevision");
    if (!hw_revision) {
        goto end;
    }

    
    if(!cJSON_IsString(hw_revision))
    {
    goto end; //String
    }

    // device_info->web_api_version
    cJSON *web_api_version = cJSON_GetObjectItemCaseSensitive(device_infoJSON, "webApiVersion");
    if (!web_api_version) {
        goto end;
    }

    
    if(!cJSON_IsString(web_api_version))
    {
    goto end; //String
    }

    // device_info->eth_mac
    cJSON *eth_mac = cJSON_GetObjectItemCaseSensitive(device_infoJSON, "ethMac");
    if (!eth_mac) {
        goto end;
    }

    
    if(!cJSON_IsString(eth_mac))
    {
    goto end; //String
    }

    // device_info->wifi_mac
    cJSON *wifi_mac = cJSON_GetObjectItemCaseSensitive(device_infoJSON, "wifiMac");
    if (!wifi_mac) {
        goto end;
    }

    
    if(!cJSON_IsString(wifi_mac))
    {
    goto end; //String
    }


    device_info_local_var = device_info_create (
        strdup(version->valuestring),
        strdup(serial->valuestring),
        strdup(hw_revision->valuestring),
        strdup(web_api_version->valuestring),
        strdup(eth_mac->valuestring),
        strdup(wifi_mac->valuestring)
        );

    return device_info_local_var;
end:
    return NULL;

}
