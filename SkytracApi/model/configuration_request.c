#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "configuration_request.h"



configuration_request_t *configuration_request_create(
    char *web_api_version,
    dns_settings_request_t *dns,
    eth_settings_request_t *eth,
    configuration_request_gps_t *gps,
    wi_fi_settings_request_t *wifi,
    configuration_request_ird_t *ird,
    configuration_request_outgoing_firewall_t *outgoing_firewall,
    configuration_request_port_fwd_t *port_fwd
    ) {
    configuration_request_t *configuration_request_local_var = malloc(sizeof(configuration_request_t));
    if (!configuration_request_local_var) {
        return NULL;
    }
    configuration_request_local_var->web_api_version = web_api_version;
    configuration_request_local_var->dns = dns;
    configuration_request_local_var->eth = eth;
    configuration_request_local_var->gps = gps;
    configuration_request_local_var->wifi = wifi;
    configuration_request_local_var->ird = ird;
    configuration_request_local_var->outgoing_firewall = outgoing_firewall;
    configuration_request_local_var->port_fwd = port_fwd;

    return configuration_request_local_var;
}


void configuration_request_free(configuration_request_t *configuration_request) {
    if(NULL == configuration_request){
        return ;
    }
    listEntry_t *listEntry;
    if (configuration_request->web_api_version) {
        free(configuration_request->web_api_version);
        configuration_request->web_api_version = NULL;
    }
    if (configuration_request->dns) {
        dns_settings_request_free(configuration_request->dns);
        configuration_request->dns = NULL;
    }
    if (configuration_request->eth) {
        eth_settings_request_free(configuration_request->eth);
        configuration_request->eth = NULL;
    }
    if (configuration_request->gps) {
        configuration_request_gps_free(configuration_request->gps);
        configuration_request->gps = NULL;
    }
    if (configuration_request->wifi) {
        wi_fi_settings_request_free(configuration_request->wifi);
        configuration_request->wifi = NULL;
    }
    if (configuration_request->ird) {
        configuration_request_ird_free(configuration_request->ird);
        configuration_request->ird = NULL;
    }
    if (configuration_request->outgoing_firewall) {
        configuration_request_outgoing_firewall_free(configuration_request->outgoing_firewall);
        configuration_request->outgoing_firewall = NULL;
    }
    if (configuration_request->port_fwd) {
        configuration_request_port_fwd_free(configuration_request->port_fwd);
        configuration_request->port_fwd = NULL;
    }
    free(configuration_request);
}

cJSON *configuration_request_convertToJSON(configuration_request_t *configuration_request) {
    cJSON *item = cJSON_CreateObject();

    // configuration_request->web_api_version
    if(configuration_request->web_api_version) {
    if(cJSON_AddStringToObject(item, "webApiVersion", configuration_request->web_api_version) == NULL) {
    goto fail; //String
    }
    }


    // configuration_request->dns
    if(configuration_request->dns) {
    cJSON *dns_local_JSON = dns_settings_request_convertToJSON(configuration_request->dns);
    if(dns_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dns", dns_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // configuration_request->eth
    if(configuration_request->eth) {
    cJSON *eth_local_JSON = eth_settings_request_convertToJSON(configuration_request->eth);
    if(eth_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "eth", eth_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // configuration_request->gps
    if(configuration_request->gps) {
    cJSON *gps_local_JSON = configuration_request_gps_convertToJSON(configuration_request->gps);
    if(gps_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "gps", gps_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // configuration_request->wifi
    if(configuration_request->wifi) {
    cJSON *wifi_local_JSON = wi_fi_settings_request_convertToJSON(configuration_request->wifi);
    if(wifi_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wifi", wifi_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // configuration_request->ird
    if(configuration_request->ird) {
    cJSON *ird_local_JSON = configuration_request_ird_convertToJSON(configuration_request->ird);
    if(ird_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ird", ird_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // configuration_request->outgoing_firewall
    if(configuration_request->outgoing_firewall) {
    cJSON *outgoing_firewall_local_JSON = configuration_request_outgoing_firewall_convertToJSON(configuration_request->outgoing_firewall);
    if(outgoing_firewall_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "outgoingFirewall", outgoing_firewall_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // configuration_request->port_fwd
    if(configuration_request->port_fwd) {
    cJSON *port_fwd_local_JSON = configuration_request_port_fwd_convertToJSON(configuration_request->port_fwd);
    if(port_fwd_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portFwd", port_fwd_local_JSON);
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

configuration_request_t *configuration_request_parseFromJSON(cJSON *configuration_requestJSON){

    configuration_request_t *configuration_request_local_var = NULL;

    // define the local variable for configuration_request->dns
    dns_settings_request_t *dns_local_nonprim = NULL;

    // define the local variable for configuration_request->eth
    eth_settings_request_t *eth_local_nonprim = NULL;

    // define the local variable for configuration_request->gps
    configuration_request_gps_t *gps_local_nonprim = NULL;

    // define the local variable for configuration_request->wifi
    wi_fi_settings_request_t *wifi_local_nonprim = NULL;

    // define the local variable for configuration_request->ird
    configuration_request_ird_t *ird_local_nonprim = NULL;

    // define the local variable for configuration_request->outgoing_firewall
    configuration_request_outgoing_firewall_t *outgoing_firewall_local_nonprim = NULL;

    // define the local variable for configuration_request->port_fwd
    configuration_request_port_fwd_t *port_fwd_local_nonprim = NULL;

    // configuration_request->web_api_version
    cJSON *web_api_version = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "webApiVersion");
    if (web_api_version) { 
    if(!cJSON_IsString(web_api_version) && !cJSON_IsNull(web_api_version))
    {
    goto end; //String
    }
    }

    // configuration_request->dns
    cJSON *dns = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "dns");
    if (dns) { 
    dns_local_nonprim = dns_settings_request_parseFromJSON(dns); //nonprimitive
    }

    // configuration_request->eth
    cJSON *eth = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "eth");
    if (eth) { 
    eth_local_nonprim = eth_settings_request_parseFromJSON(eth); //nonprimitive
    }

    // configuration_request->gps
    cJSON *gps = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "gps");
    if (gps) { 
    gps_local_nonprim = configuration_request_gps_parseFromJSON(gps); //nonprimitive
    }

    // configuration_request->wifi
    cJSON *wifi = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "wifi");
    if (wifi) { 
    wifi_local_nonprim = wi_fi_settings_request_parseFromJSON(wifi); //nonprimitive
    }

    // configuration_request->ird
    cJSON *ird = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "ird");
    if (ird) { 
    ird_local_nonprim = configuration_request_ird_parseFromJSON(ird); //nonprimitive
    }

    // configuration_request->outgoing_firewall
    cJSON *outgoing_firewall = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "outgoingFirewall");
    if (outgoing_firewall) { 
    outgoing_firewall_local_nonprim = configuration_request_outgoing_firewall_parseFromJSON(outgoing_firewall); //nonprimitive
    }

    // configuration_request->port_fwd
    cJSON *port_fwd = cJSON_GetObjectItemCaseSensitive(configuration_requestJSON, "portFwd");
    if (port_fwd) { 
    port_fwd_local_nonprim = configuration_request_port_fwd_parseFromJSON(port_fwd); //nonprimitive
    }


    configuration_request_local_var = configuration_request_create (
        web_api_version && !cJSON_IsNull(web_api_version) ? strdup(web_api_version->valuestring) : NULL,
        dns ? dns_local_nonprim : NULL,
        eth ? eth_local_nonprim : NULL,
        gps ? gps_local_nonprim : NULL,
        wifi ? wifi_local_nonprim : NULL,
        ird ? ird_local_nonprim : NULL,
        outgoing_firewall ? outgoing_firewall_local_nonprim : NULL,
        port_fwd ? port_fwd_local_nonprim : NULL
        );

    return configuration_request_local_var;
end:
    if (dns_local_nonprim) {
        dns_settings_request_free(dns_local_nonprim);
        dns_local_nonprim = NULL;
    }
    if (eth_local_nonprim) {
        eth_settings_request_free(eth_local_nonprim);
        eth_local_nonprim = NULL;
    }
    if (gps_local_nonprim) {
        configuration_request_gps_free(gps_local_nonprim);
        gps_local_nonprim = NULL;
    }
    if (wifi_local_nonprim) {
        wi_fi_settings_request_free(wifi_local_nonprim);
        wifi_local_nonprim = NULL;
    }
    if (ird_local_nonprim) {
        configuration_request_ird_free(ird_local_nonprim);
        ird_local_nonprim = NULL;
    }
    if (outgoing_firewall_local_nonprim) {
        configuration_request_outgoing_firewall_free(outgoing_firewall_local_nonprim);
        outgoing_firewall_local_nonprim = NULL;
    }
    if (port_fwd_local_nonprim) {
        configuration_request_port_fwd_free(port_fwd_local_nonprim);
        port_fwd_local_nonprim = NULL;
    }
    return NULL;

}
