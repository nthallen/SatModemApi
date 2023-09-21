#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wi_fi_settings_response.h"


char* securitywi_fi_settings_response_ToString(quicksilver_web_api_wi_fi_settings_response_SECURITY_e security) {
    char* securityArray[] =  { "NULL", "open", "wpa2" };
	return securityArray[security];
}

quicksilver_web_api_wi_fi_settings_response_SECURITY_e securitywi_fi_settings_response_FromString(char* security){
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

wi_fi_settings_response_t *wi_fi_settings_response_create(
    int enabled,
    char *addr,
    char *mask,
    char *ssid,
    int visible,
    quicksilver_web_api_wi_fi_settings_response_SECURITY_e security,
    char *wpa2_pwd,
    any_type_t *dhcp
    ) {
    wi_fi_settings_response_t *wi_fi_settings_response_local_var = malloc(sizeof(wi_fi_settings_response_t));
    if (!wi_fi_settings_response_local_var) {
        return NULL;
    }
    wi_fi_settings_response_local_var->enabled = enabled;
    wi_fi_settings_response_local_var->addr = addr;
    wi_fi_settings_response_local_var->mask = mask;
    wi_fi_settings_response_local_var->ssid = ssid;
    wi_fi_settings_response_local_var->visible = visible;
    wi_fi_settings_response_local_var->security = security;
    wi_fi_settings_response_local_var->wpa2_pwd = wpa2_pwd;
    wi_fi_settings_response_local_var->dhcp = dhcp;

    return wi_fi_settings_response_local_var;
}


void wi_fi_settings_response_free(wi_fi_settings_response_t *wi_fi_settings_response) {
    if(NULL == wi_fi_settings_response){
        return ;
    }
    listEntry_t *listEntry;
    if (wi_fi_settings_response->addr) {
        free(wi_fi_settings_response->addr);
        wi_fi_settings_response->addr = NULL;
    }
    if (wi_fi_settings_response->mask) {
        free(wi_fi_settings_response->mask);
        wi_fi_settings_response->mask = NULL;
    }
    if (wi_fi_settings_response->ssid) {
        free(wi_fi_settings_response->ssid);
        wi_fi_settings_response->ssid = NULL;
    }
    if (wi_fi_settings_response->wpa2_pwd) {
        free(wi_fi_settings_response->wpa2_pwd);
        wi_fi_settings_response->wpa2_pwd = NULL;
    }
    if (wi_fi_settings_response->dhcp) {
        _free(wi_fi_settings_response->dhcp);
        wi_fi_settings_response->dhcp = NULL;
    }
    free(wi_fi_settings_response);
}

cJSON *wi_fi_settings_response_convertToJSON(wi_fi_settings_response_t *wi_fi_settings_response) {
    cJSON *item = cJSON_CreateObject();

    // wi_fi_settings_response->enabled
    if (!wi_fi_settings_response->enabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "enabled", wi_fi_settings_response->enabled) == NULL) {
    goto fail; //Bool
    }


    // wi_fi_settings_response->addr
    if (!wi_fi_settings_response->addr) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "addr", wi_fi_settings_response->addr) == NULL) {
    goto fail; //String
    }


    // wi_fi_settings_response->mask
    if (!wi_fi_settings_response->mask) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mask", wi_fi_settings_response->mask) == NULL) {
    goto fail; //String
    }


    // wi_fi_settings_response->ssid
    if (!wi_fi_settings_response->ssid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ssid", wi_fi_settings_response->ssid) == NULL) {
    goto fail; //String
    }


    // wi_fi_settings_response->visible
    if (!wi_fi_settings_response->visible) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "visible", wi_fi_settings_response->visible) == NULL) {
    goto fail; //Bool
    }


    // wi_fi_settings_response->security
    if (quicksilver_web_api_wi_fi_settings_response_SECURITY_NULL == wi_fi_settings_response->security) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "security", securitywi_fi_settings_response_ToString(wi_fi_settings_response->security)) == NULL)
    {
    goto fail; //Enum
    }


    // wi_fi_settings_response->wpa2_pwd
    if (!wi_fi_settings_response->wpa2_pwd) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "wpa2Pwd", wi_fi_settings_response->wpa2_pwd) == NULL) {
    goto fail; //String
    }


    // wi_fi_settings_response->dhcp
    if (!wi_fi_settings_response->dhcp) {
        goto fail;
    }
    cJSON *dhcp_local_JSON = _convertToJSON(wi_fi_settings_response->dhcp);
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

wi_fi_settings_response_t *wi_fi_settings_response_parseFromJSON(cJSON *wi_fi_settings_responseJSON){

    wi_fi_settings_response_t *wi_fi_settings_response_local_var = NULL;

    // define the local variable for wi_fi_settings_response->dhcp
    _t *dhcp_local_nonprim = NULL;

    // wi_fi_settings_response->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "enabled");
    if (!enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }

    // wi_fi_settings_response->addr
    cJSON *addr = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "addr");
    if (!addr) {
        goto end;
    }

    
    if(!cJSON_IsString(addr))
    {
    goto end; //String
    }

    // wi_fi_settings_response->mask
    cJSON *mask = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "mask");
    if (!mask) {
        goto end;
    }

    
    if(!cJSON_IsString(mask))
    {
    goto end; //String
    }

    // wi_fi_settings_response->ssid
    cJSON *ssid = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "ssid");
    if (!ssid) {
        goto end;
    }

    
    if(!cJSON_IsString(ssid))
    {
    goto end; //String
    }

    // wi_fi_settings_response->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "visible");
    if (!visible) {
        goto end;
    }

    
    if(!cJSON_IsBool(visible))
    {
    goto end; //Bool
    }

    // wi_fi_settings_response->security
    cJSON *security = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "security");
    if (!security) {
        goto end;
    }

    quicksilver_web_api_wi_fi_settings_response_SECURITY_e securityVariable;
    
    if(!cJSON_IsString(security))
    {
    goto end; //Enum
    }
    securityVariable = securitywi_fi_settings_response_FromString(security->valuestring);

    // wi_fi_settings_response->wpa2_pwd
    cJSON *wpa2_pwd = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "wpa2Pwd");
    if (!wpa2_pwd) {
        goto end;
    }

    
    if(!cJSON_IsString(wpa2_pwd))
    {
    goto end; //String
    }

    // wi_fi_settings_response->dhcp
    cJSON *dhcp = cJSON_GetObjectItemCaseSensitive(wi_fi_settings_responseJSON, "dhcp");
    if (!dhcp) {
        goto end;
    }

    
    dhcp_local_nonprim = _parseFromJSON(dhcp); //custom


    wi_fi_settings_response_local_var = wi_fi_settings_response_create (
        enabled->valueint,
        strdup(addr->valuestring),
        strdup(mask->valuestring),
        strdup(ssid->valuestring),
        visible->valueint,
        securityVariable,
        strdup(wpa2_pwd->valuestring),
        dhcp_local_nonprim
        );

    return wi_fi_settings_response_local_var;
end:
    if (dhcp_local_nonprim) {
        _free(dhcp_local_nonprim);
        dhcp_local_nonprim = NULL;
    }
    return NULL;

}
