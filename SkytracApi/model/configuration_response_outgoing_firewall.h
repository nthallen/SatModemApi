/*
 * configuration_response_outgoing_firewall.h
 *
 * 
 */

#ifndef _configuration_response_outgoing_firewall_H_
#define _configuration_response_outgoing_firewall_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_response_outgoing_firewall_t configuration_response_outgoing_firewall_t;

#include "outgoing_firewall_rule.h"



typedef struct configuration_response_outgoing_firewall_t {
    list_t *rules; //nonprimitive container

} configuration_response_outgoing_firewall_t;

configuration_response_outgoing_firewall_t *configuration_response_outgoing_firewall_create(
    list_t *rules
);

void configuration_response_outgoing_firewall_free(configuration_response_outgoing_firewall_t *configuration_response_outgoing_firewall);

configuration_response_outgoing_firewall_t *configuration_response_outgoing_firewall_parseFromJSON(cJSON *configuration_response_outgoing_firewallJSON);

cJSON *configuration_response_outgoing_firewall_convertToJSON(configuration_response_outgoing_firewall_t *configuration_response_outgoing_firewall);

#endif /* _configuration_response_outgoing_firewall_H_ */

