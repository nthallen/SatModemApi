/*
 * configuration_response.h
 *
 * 
 */

#ifndef _configuration_response_H_
#define _configuration_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_response_t configuration_response_t;

#include "configuration_response_gps.h"
#include "configuration_response_ird.h"
#include "configuration_response_outgoing_firewall.h"
#include "configuration_response_port_fwd.h"
#include "dns_settings_response.h"
#include "eth_settings_response.h"
#include "wi_fi_settings_response.h"



typedef struct configuration_response_t {
    char *web_api_version; // string
    struct dns_settings_response_t *dns; //model
    struct eth_settings_response_t *eth; //model
    struct configuration_response_gps_t *gps; //model
    struct wi_fi_settings_response_t *wifi; //model
    struct configuration_response_ird_t *ird; //model
    struct configuration_response_outgoing_firewall_t *outgoing_firewall; //model
    struct configuration_response_port_fwd_t *port_fwd; //model

} configuration_response_t;

configuration_response_t *configuration_response_create(
    char *web_api_version,
    dns_settings_response_t *dns,
    eth_settings_response_t *eth,
    configuration_response_gps_t *gps,
    wi_fi_settings_response_t *wifi,
    configuration_response_ird_t *ird,
    configuration_response_outgoing_firewall_t *outgoing_firewall,
    configuration_response_port_fwd_t *port_fwd
);

void configuration_response_free(configuration_response_t *configuration_response);

configuration_response_t *configuration_response_parseFromJSON(cJSON *configuration_responseJSON);

cJSON *configuration_response_convertToJSON(configuration_response_t *configuration_response);

#endif /* _configuration_response_H_ */

