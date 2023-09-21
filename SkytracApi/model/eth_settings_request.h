/*
 * eth_settings_request.h
 *
 * 
 */

#ifndef _eth_settings_request_H_
#define _eth_settings_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct eth_settings_request_t eth_settings_request_t;

#include "eth_settings_request_dhcp.h"



typedef struct eth_settings_request_t {
    char *addr; // string
    char *mask; // string
    struct eth_settings_request_dhcp_t *dhcp; //model

} eth_settings_request_t;

eth_settings_request_t *eth_settings_request_create(
    char *addr,
    char *mask,
    eth_settings_request_dhcp_t *dhcp
);

void eth_settings_request_free(eth_settings_request_t *eth_settings_request);

eth_settings_request_t *eth_settings_request_parseFromJSON(cJSON *eth_settings_requestJSON);

cJSON *eth_settings_request_convertToJSON(eth_settings_request_t *eth_settings_request);

#endif /* _eth_settings_request_H_ */

