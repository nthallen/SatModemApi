#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_settings_response.h"



dns_settings_response_t *dns_settings_response_create(
    char *primary,
    char *secondary
    ) {
    dns_settings_response_t *dns_settings_response_local_var = malloc(sizeof(dns_settings_response_t));
    if (!dns_settings_response_local_var) {
        return NULL;
    }
    dns_settings_response_local_var->primary = primary;
    dns_settings_response_local_var->secondary = secondary;

    return dns_settings_response_local_var;
}


void dns_settings_response_free(dns_settings_response_t *dns_settings_response) {
    if(NULL == dns_settings_response){
        return ;
    }
    listEntry_t *listEntry;
    if (dns_settings_response->primary) {
        free(dns_settings_response->primary);
        dns_settings_response->primary = NULL;
    }
    if (dns_settings_response->secondary) {
        free(dns_settings_response->secondary);
        dns_settings_response->secondary = NULL;
    }
    free(dns_settings_response);
}

cJSON *dns_settings_response_convertToJSON(dns_settings_response_t *dns_settings_response) {
    cJSON *item = cJSON_CreateObject();

    // dns_settings_response->primary
    if (!dns_settings_response->primary) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "primary", dns_settings_response->primary) == NULL) {
    goto fail; //String
    }


    // dns_settings_response->secondary
    if (!dns_settings_response->secondary) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "secondary", dns_settings_response->secondary) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dns_settings_response_t *dns_settings_response_parseFromJSON(cJSON *dns_settings_responseJSON){

    dns_settings_response_t *dns_settings_response_local_var = NULL;

    // dns_settings_response->primary
    cJSON *primary = cJSON_GetObjectItemCaseSensitive(dns_settings_responseJSON, "primary");
    if (!primary) {
        goto end;
    }

    
    if(!cJSON_IsString(primary))
    {
    goto end; //String
    }

    // dns_settings_response->secondary
    cJSON *secondary = cJSON_GetObjectItemCaseSensitive(dns_settings_responseJSON, "secondary");
    if (!secondary) {
        goto end;
    }

    
    if(!cJSON_IsString(secondary))
    {
    goto end; //String
    }


    dns_settings_response_local_var = dns_settings_response_create (
        strdup(primary->valuestring),
        strdup(secondary->valuestring)
        );

    return dns_settings_response_local_var;
end:
    return NULL;

}
