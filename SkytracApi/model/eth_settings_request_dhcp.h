/*
 * eth_settings_request_dhcp.h
 *
 * 
 */

#ifndef _eth_settings_request_dhcp_H_
#define _eth_settings_request_dhcp_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct eth_settings_request_dhcp_t eth_settings_request_dhcp_t;

#include "dhcp_range.h"



typedef struct eth_settings_request_dhcp_t {
    int enabled; //boolean
    list_t *ranges; //nonprimitive container

} eth_settings_request_dhcp_t;

eth_settings_request_dhcp_t *eth_settings_request_dhcp_create(
    int enabled,
    list_t *ranges
);

void eth_settings_request_dhcp_free(eth_settings_request_dhcp_t *eth_settings_request_dhcp);

eth_settings_request_dhcp_t *eth_settings_request_dhcp_parseFromJSON(cJSON *eth_settings_request_dhcpJSON);

cJSON *eth_settings_request_dhcp_convertToJSON(eth_settings_request_dhcp_t *eth_settings_request_dhcp);

#endif /* _eth_settings_request_dhcp_H_ */

