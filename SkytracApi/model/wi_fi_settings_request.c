#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wi_fi_settings_request.h"


char* securitywi_fi_settings_request_ToString(quicksilver_web_api_wi_fi_settings_request_SECURITY_e security) {
    char* securityArray[] =  { "NULL", "open", "wpa2" };
	return securityArray[security];
}

quicksilver_web_api_wi_fi_settings_request_SECURITY_e securitywi_fi_settings_request_FromString(char* security){
    int stringToReturn = 0;
    char *securityArray[] =  { "NULL", "open", "wpa2" };
    size_t sizeofArray = sizeof(securityArray) / sizeof(securityArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(security, securityArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

wi_fi_settings_request_t *wi_fi_settings_request_create(
    int enabled,
    char *addr,
    char *mask,
    char *ssid,
    int visible,
    quicksilver_web_api_wi_fi_settings_request_SECURITY_e security,
    char *wpa2_pwd,
    eth_settings_request_dhcp_t *dhcp
    ) {
    wi_fi_settings_request_t *wi_fi_settings_request_local_var = malloc(sizeof(wi_fi_settings_request_t));
    if (!wi_fi_settings_request_local_var) {
        return NULL;
    }
    wi_fi_settings_request_local_var->enabled = enabled;
    wi_fi_settings_request_local_var->addr = addr;
    wi_fi_settings_request_local_var->mask = mask;
    wi_fi_settings_request_local_var->ssid = ssid;
    wi_fi_settings_request_local_var->visible = visible;
    wi_fi_settings_request_local_var->security = security;
    wi_fi_settings_request_local_var->wpa2_pwd = wpa2_pwd;
    wi_fi_settings_request_local_var->dhcp = dhcp;

    return wi_fi_settings_request_local_var;
}


void wi_fi_settings_request_free(wi_fi_settings_request_t *wi_fi_settings_request) {
    if(NULL == wi_fi_settings_request){
        return ;
    }
    listEntry_t *listEntry;
    if (wi_fi_settings_request->addr) {
        free(wi_fi_settings_request->addr);
        wi_fi_settings_request->addr = NULL;
    }
    if (wi_fi_settings_request->mask) {
        free(wi_fi_settings_request->mask);
        wi_fi_settings_request->mask = NULL;
    }
    if (wi_fi_settings_request->ssid) {
        free(wi_fi_settings_request->ssid);
        wi_fi_settings_request->ssid = NULL;
    }
    if (wi_fi_settings_request->wpa2_pwd) {
        free(wi_fi_settings_request->wpa2_pwd);
        wi_fi_settings_request->wpa2_pwd = NULL;
    }
    if (wi_fi_settings_request->dhcp) {
        eth_settings_request_dhcp_free(wi_fi_settings_request->dhcp);
        wi_fi_settings_request->dhcp = NULL;
    }
    free(wi_fi_settings_request);
}

cJSON *wi_fi_settings_request_convertToJSON(wi_fi_settings_request_t *wi_fi_settings_request) {
    cJSON *item = cJSON_CreateObject();

    // wi_fi_settings_request->enabled
    if(wi_fi_settings_request->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", wi_fi_settings_request->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // wi_fi_settings_request->addr
    if(wi_fi_settings_request->addr) {
    if(cJSON_AddStringToObject(item, "addr", wi_fi_settings_request->addr) == NULL) {
    goto fail; //String
    }
    }


    // wi_fi_settings_request->mask
    if(wi_fi_settings_request->mask) {
    if(cJSON_AddStringToObject(item, "mask", wi_fi_settings_request->mask) == NULL) {
    goto fail; //String
    }
    }


    // wi_fi_settings_request->ssid
    if(wi_fi_settings_request->ssid) {
    if(cJSON_AddStringToObject(item, "ssid", wi_fi_settings_request->ssid) == NULL) {
    goto fail; //String
    }
    }


    // wi_fi_settings_request->visible
    if(wi_fi_settings_request->visible) {
    if(cJSON_AddBoolToObject(item, "visible", wi_fi_settings_request->visible) == NULL) {
    goto fail; //Bool
    }
    }


    // wi_fi_settings_request->security
    if(wi_fi_settings_request->security != quicksilver_web_api_wi_fi_settings_request_SECURITY_NULL) {
    if(cJSON_AddStringToObject(item, "security", securitywi_fi_settings_request_ToString(wi_fi_settings_request->security)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // wi_fi_settings_request->wpa2_pwd
    if(wi_fi_settings_request->wpa2_pwd) {
    if(cJSON_AddStringToObject(item, "wpa2Pwd", wi_fi_settings_request->wpa2_pwd) == NULL) {
    goto fail; //String
    }
    }


    // wi_fi_settings_request->dhcp
    if(wi_fi_settings_request->dhcp) {
    cJSON *dhcp_local_JSON = eth_settings_request_dhcp_convertToJSON(wi_fi_settings_request->dhcp);
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

wi_fi_settings_request_t *wi_fi_settings_request_parseFromJSON(cJSON *wi_fi_settings_requestJSON){

    wi_fi_settings_request_t *wi_fi_settings_request_local_var = NULL;

    // define the local variable for wi_fi_settings_request->dhcp
    eth_settings_request_dhcp_t *dhcp_local_nonprim = NULL;

    // wi_fi_settings_request->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // wi_fi_settings_request->addr
    cJSON *addr = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "addr");
    if (addr) { 
    if(!cJSON_IsString(addr) && !cJSON_IsNull(addr))
    {
    goto end; //String
    }
    }

    // wi_fi_settings_request->mask
    cJSON *mask = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "mask");
    if (mask) { 
    if(!cJSON_IsString(mask) && !cJSON_IsNull(mask))
    {
    goto end; //String
    }
    }

    // wi_fi_settings_request->ssid
    cJSON *ssid = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "ssid");
    if (ssid) { 
    if(!cJSON_IsString(ssid) && !cJSON_IsNull(ssid))
    {
    goto end; //String
    }
    }

    // wi_fi_settings_request->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "visible");
    if (visible) { 
    if(!cJSON_IsBool(visible))
    {
    goto end; //Bool
    }
    }

    // wi_fi_settings_request->security
    cJSON *security = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "security");
    quicksilver_web_api_wi_fi_settings_request_SECURITY_e securityVariable;
    if (security) { 
    if(!cJSON_IsString(security))
    {
    goto end; //Enum
    }
    securityVariable = securitywi_fi_settings_request_FromString(security->valuestring);
    }

    // wi_fi_settings_request->wpa2_pwd
    cJSON *wpa2_pwd = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "wpa2Pwd");
    if (wpa2_pwd) { 
    if(!cJSON_IsString(wpa2_pwd) && !cJSON_IsNull(wpa2_pwd))
    {
    goto end; //String
    }
    }

    // wi_fi_settings_request->dhcp
    cJSON *dhcp = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_requestJSON, "dhcp");
    if (dhcp) { 
    dhcp_local_nonprim = eth_settings_request_dhcp_parseFromJSON(dhcp); //nonprimitive
    }


    wi_fi_settings_request_local_var = wi_fi_settings_request_create (
        enabled ? enabled->valueint : 0,
        addr && !cJSON_IsNull(addr) ? strdup(addr->valuestring) : NULL,
        mask && !cJSON_IsNull(mask) ? strdup(mask->valuestring) : NULL,
        ssid && !cJSON_IsNull(ssid) ? strdup(ssid->valuestring) : NULL,
        visible ? visible->valueint : 0,
        security ? securityVariable : -1,
        wpa2_pwd && !cJSON_IsNull(wpa2_pwd) ? strdup(wpa2_pwd->valuestring) : NULL,
        dhcp ? dhcp_local_nonprim : NULL
        );

    return wi_fi_settings_request_local_var;
end:
    if (dhcp_local_nonprim) {
        eth_settings_request_dhcp_free(dhcp_local_nonprim);
        dhcp_local_nonprim = NULL;
    }
    return NULL;

}
