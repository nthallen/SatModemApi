/*
 * eth_settings_response.h
 *
 * 
 */

#ifndef _eth_settings_response_H_
#define _eth_settings_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct eth_settings_response_t eth_settings_response_t;

#include "eth_settings_request_dhcp.h"



typedef struct eth_settings_response_t {
    char *addr; // string
    char *mask; // string
    struct eth_settings_request_dhcp_t *dhcp; //model

} eth_settings_response_t;

eth_settings_response_t *eth_settings_response_create(
    char *addr,
    char *mask,
    eth_settings_request_dhcp_t *dhcp
);

void eth_settings_response_free(eth_settings_response_t *eth_settings_response);

eth_settings_response_t *eth_settings_response_parseFromJSON(cJSON *eth_settings_responseJSON);

cJSON *eth_settings_response_convertToJSON(eth_settings_response_t *eth_settings_response);

#endif /* _eth_settings_response_H_ */

