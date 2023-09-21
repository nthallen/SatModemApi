/*
 * configuration_request.h
 *
 * 
 */

#ifndef _configuration_request_H_
#define _configuration_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_request_t configuration_request_t;

#include "configuration_request_gps.h"
#include "configuration_request_ird.h"
#include "configuration_request_outgoing_firewall.h"
#include "configuration_request_port_fwd.h"
#include "dns_settings_request.h"
#include "eth_settings_request.h"
#include "wi_fi_settings_request.h"



typedef struct configuration_request_t {
    char *web_api_version; // string
    struct dns_settings_request_t *dns; //model
    struct eth_settings_request_t *eth; //model
    struct configuration_request_gps_t *gps; //model
    struct wi_fi_settings_request_t *wifi; //model
    struct configuration_request_ird_t *ird; //model
    struct configuration_request_outgoing_firewall_t *outgoing_firewall; //model
    struct configuration_request_port_fwd_t *port_fwd; //model

} configuration_request_t;

configuration_request_t *configuration_request_create(
    char *web_api_version,
    dns_settings_request_t *dns,
    eth_settings_request_t *eth,
    configuration_request_gps_t *gps,
    wi_fi_settings_request_t *wifi,
    configuration_request_ird_t *ird,
    configuration_request_outgoing_firewall_t *outgoing_firewall,
    configuration_request_port_fwd_t *port_fwd
);

void configuration_request_free(configuration_request_t *configuration_request);

configuration_request_t *configuration_request_parseFromJSON(cJSON *configuration_requestJSON);

cJSON *configuration_request_convertToJSON(configuration_request_t *configuration_request);

#endif /* _configuration_request_H_ */

