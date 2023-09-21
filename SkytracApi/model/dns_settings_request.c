#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_settings_request.h"



dns_settings_request_t *dns_settings_request_create(
    char *primary,
    char *secondary
    ) {
    dns_settings_request_t *dns_settings_request_local_var = malloc(sizeof(dns_settings_request_t));
    if (!dns_settings_request_local_var) {
        return NULL;
    }
    dns_settings_request_local_var->primary = primary;
    dns_settings_request_local_var->secondary = secondary;

    return dns_settings_request_local_var;
}


void dns_settings_request_free(dns_settings_request_t *dns_settings_request) {
    if(NULL == dns_settings_request){
        return ;
    }
    listEntry_t *listEntry;
    if (dns_settings_request->primary) {
        free(dns_settings_request->primary);
        dns_settings_request->primary = NULL;
    }
    if (dns_settings_request->secondary) {
        free(dns_settings_request->secondary);
        dns_settings_request->secondary = NULL;
    }
    free(dns_settings_request);
}

cJSON *dns_settings_request_convertToJSON(dns_settings_request_t *dns_settings_request) {
    cJSON *item = cJSON_CreateObject();

    // dns_settings_request->primary
    if(dns_settings_request->primary) {
    if(cJSON_AddStringToObject(item, "primary", dns_settings_request->primary) == NULL) {
    goto fail; //String
    }
    }


    // dns_settings_request->secondary
    if(dns_settings_request->secondary) {
    if(cJSON_AddStringToObject(item, "secondary", dns_settings_request->secondary) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dns_settings_request_t *dns_settings_request_parseFromJSON(cJSON *dns_settings_requestJSON){

    dns_settings_request_t *dns_settings_request_local_var = NULL;

    // dns_settings_request->primary
    cJSON *primary = cJSON_GetObjectItemCaseSensitive(dns_settings_requestJSON, "primary");
    if (primary) { 
    if(!cJSON_IsString(primary) && !cJSON_IsNull(primary))
    {
    goto end; //String
    }
    }

    // dns_settings_request->secondary
    cJSON *secondary = cJSON_GetObjectItemCaseSensitive(dns_settings_requestJSON, "secondary");
    if (secondary) { 
    if(!cJSON_IsString(secondary) && !cJSON_IsNull(secondary))
    {
    goto end; //String
    }
    }


    dns_settings_request_local_var = dns_settings_request_create (
        primary && !cJSON_IsNull(primary) ? strdup(primary->valuestring) : NULL,
        secondary && !cJSON_IsNull(secondary) ? strdup(secondary->valuestring) : NULL
        );

    return dns_settings_request_local_var;
end:
    return NULL;

}
