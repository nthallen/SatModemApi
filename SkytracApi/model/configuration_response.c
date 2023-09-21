#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "configuration_response.h"



configuration_response_t *configuration_response_create(
    char *web_api_version,
    dns_settings_response_t *dns,
    eth_settings_response_t *eth,
    configuration_response_gps_t *gps,
    wi_fi_settings_response_t *wifi,
    configuration_response_ird_t *ird,
    configuration_response_outgoing_firewall_t *outgoing_firewall,
    configuration_response_port_fwd_t *port_fwd
    ) {
    configuration_response_t *configuration_response_local_var = malloc(sizeof(configuration_response_t));
    if (!configuration_response_local_var) {
        return NULL;
    }
    configuration_response_local_var->web_api_version = web_api_version;
    configuration_response_local_var->dns = dns;
    configuration_response_local_var->eth = eth;
    configuration_response_local_var->gps = gps;
    configuration_response_local_var->wifi = wifi;
    configuration_response_local_var->ird = ird;
    configuration_response_local_var->outgoing_firewall = outgoing_firewall;
    configuration_response_local_var->port_fwd = port_fwd;

    return configuration_response_local_var;
}


void configuration_response_free(configuration_response_t *configuration_response) {
    if(NULL == configuration_response){
        return ;
    }
    listEntry_t *listEntry;
    if (configuration_response->web_api_version) {
        free(configuration_response->web_api_version);
        configuration_response->web_api_version = NULL;
    }
    if (configuration_response->dns) {
        dns_settings_response_free(configuration_response->dns);
        configuration_response->dns = NULL;
    }
    if (configuration_response->eth) {
        eth_settings_response_free(configuration_response->eth);
        configuration_response->eth = NULL;
    }
    if (configuration_response->gps) {
        configuration_response_gps_free(configuration_response->gps);
        configuration_response->gps = NULL;
    }
    if (configuration_response->wifi) {
        wi_fi_settings_response_free(configuration_response->wifi);
        configuration_response->wifi = NULL;
    }
    if (configuration_response->ird) {
        configuration_response_ird_free(configuration_response->ird);
        configuration_response->ird = NULL;
    }
    if (configuration_response->outgoing_firewall) {
        configuration_response_outgoing_firewall_free(configuration_response->outgoing_firewall);
        configuration_response->outgoing_firewall = NULL;
    }
    if (configuration_response->port_fwd) {
        configuration_response_port_fwd_free(configuration_response->port_fwd);
        configuration_response->port_fwd = NULL;
    }
    free(configuration_response);
}

cJSON *configuration_response_convertToJSON(configuration_response_t *configuration_response) {
    cJSON *item = cJSON_CreateObject();

    // configuration_response->web_api_version
    if(configuration_response->web_api_version) {
    if(cJSON_AddStringToObject(item, "webApiVersion", configuration_response->web_api_version) == NULL) {
    goto fail; //String
    }
    }


    // configuration_response->dns
    if (!configuration_response->dns) {
        goto fail;
    }
    cJSON *dns_local_JSON = dns_settings_response_convertToJSON(configuration_response->dns);
    if(dns_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dns", dns_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // configuration_response->eth
    if (!configuration_response->eth) {
        goto fail;
    }
    cJSON *eth_local_JSON = eth_settings_response_convertToJSON(configuration_response->eth);
    if(eth_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "eth", eth_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // configuration_response->gps
    if (!configuration_response->gps) {
        goto fail;
    }
    cJSON *gps_local_JSON = configuration_response_gps_convertToJSON(configuration_response->gps);
    if(gps_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "gps", gps_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // configuration_response->wifi
    if (!configuration_response->wifi) {
        goto fail;
    }
    cJSON *wifi_local_JSON = wi_fi_settings_response_convertToJSON(configuration_response->wifi);
    if(wifi_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wifi", wifi_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // configuration_response->ird
    if (!configuration_response->ird) {
        goto fail;
    }
    cJSON *ird_local_JSON = configuration_response_ird_convertToJSON(configuration_response->ird);
    if(ird_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ird", ird_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // configuration_response->outgoing_firewall
    if (!configuration_response->outgoing_firewall) {
        goto fail;
    }
    cJSON *outgoing_firewall_local_JSON = configuration_response_outgoing_firewall_convertToJSON(configuration_response->outgoing_firewall);
    if(outgoing_firewall_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "outgoingFirewall", outgoing_firewall_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // configuration_response->port_fwd
    if (!configuration_response->port_fwd) {
        goto fail;
    }
    cJSON *port_fwd_local_JSON = configuration_response_port_fwd_convertToJSON(configuration_response->port_fwd);
    if(port_fwd_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portFwd", port_fwd_local_JSON);
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

configuration_response_t *configuration_response_parseFromJSON(cJSON *configuration_responseJSON){

    configuration_response_t *configuration_response_local_var = NULL;

    // define the local variable for configuration_response->dns
    dns_settings_response_t *dns_local_nonprim = NULL;

    // define the local variable for configuration_response->eth
    eth_settings_response_t *eth_local_nonprim = NULL;

    // define the local variable for configuration_response->gps
    configuration_response_gps_t *gps_local_nonprim = NULL;

    // define the local variable for configuration_response->wifi
    wi_fi_settings_response_t *wifi_local_nonprim = NULL;

    // define the local variable for configuration_response->ird
    configuration_response_ird_t *ird_local_nonprim = NULL;

    // define the local variable for configuration_response->outgoing_firewall
    configuration_response_outgoing_firewall_t *outgoing_firewall_local_nonprim = NULL;

    // define the local variable for configuration_response->port_fwd
    configuration_response_port_fwd_t *port_fwd_local_nonprim = NULL;

    // configuration_response->web_api_version
    cJSON *web_api_version = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "webApiVersion");
    if (web_api_version) { 
    if(!cJSON_IsString(web_api_version) && !cJSON_IsNull(web_api_version))
    {
    goto end; //String
    }
    }

    // configuration_response->dns
    cJSON *dns = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "dns");
    if (!dns) {
        goto end;
    }

    
    dns_local_nonprim = dns_settings_response_parseFromJSON(dns); //nonprimitive

    // configuration_response->eth
    cJSON *eth = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "eth");
    if (!eth) {
        goto end;
    }

    
    eth_local_nonprim = eth_settings_response_parseFromJSON(eth); //nonprimitive

    // configuration_response->gps
    cJSON *gps = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "gps");
    if (!gps) {
        goto end;
    }

    
    gps_local_nonprim = configuration_response_gps_parseFromJSON(gps); //nonprimitive

    // configuration_response->wifi
    cJSON *wifi = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "wifi");
    if (!wifi) {
        goto end;
    }

    
    wifi_local_nonprim = wi_fi_settings_response_parseFromJSON(wifi); //nonprimitive

    // configuration_response->ird
    cJSON *ird = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "ird");
    if (!ird) {
        goto end;
    }

    
    ird_local_nonprim = configuration_response_ird_parseFromJSON(ird); //nonprimitive

    // configuration_response->outgoing_firewall
    cJSON *outgoing_firewall = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "outgoingFirewall");
    if (!outgoing_firewall) {
        goto end;
    }

    
    outgoing_firewall_local_nonprim = configuration_response_outgoing_firewall_parseFromJSON(outgoing_firewall); //nonprimitive

    // configuration_response->port_fwd
    cJSON *port_fwd = cJSON_GetObjectItemCaseSensitive(configuration_responseJSON, "portFwd");
    if (!port_fwd) {
        goto end;
    }

    
    port_fwd_local_nonprim = configuration_response_port_fwd_parseFromJSON(port_fwd); //nonprimitive


    configuration_response_local_var = configuration_response_create (
        web_api_version && !cJSON_IsNull(web_api_version) ? strdup(web_api_version->valuestring) : NULL,
        dns_local_nonprim,
        eth_local_nonprim,
        gps_local_nonprim,
        wifi_local_nonprim,
        ird_local_nonprim,
        outgoing_firewall_local_nonprim,
        port_fwd_local_nonprim
        );

    return configuration_response_local_var;
end:
    if (dns_local_nonprim) {
        dns_settings_response_free(dns_local_nonprim);
        dns_local_nonprim = NULL;
    }
    if (eth_local_nonprim) {
        eth_settings_response_free(eth_local_nonprim);
        eth_local_nonprim = NULL;
    }
    if (gps_local_nonprim) {
        configuration_response_gps_free(gps_local_nonprim);
        gps_local_nonprim = NULL;
    }
    if (wifi_local_nonprim) {
        wi_fi_settings_response_free(wifi_local_nonprim);
        wifi_local_nonprim = NULL;
    }
    if (ird_local_nonprim) {
        configuration_response_ird_free(ird_local_nonprim);
        ird_local_nonprim = NULL;
    }
    if (outgoing_firewall_local_nonprim) {
        configuration_response_outgoing_firewall_free(outgoing_firewall_local_nonprim);
        outgoing_firewall_local_nonprim = NULL;
    }
    if (port_fwd_local_nonprim) {
        configuration_response_port_fwd_free(port_fwd_local_nonprim);
        port_fwd_local_nonprim = NULL;
    }
    return NULL;

}
