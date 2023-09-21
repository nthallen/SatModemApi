/*
 * configuration_request_port_fwd.h
 *
 * 
 */

#ifndef _configuration_request_port_fwd_H_
#define _configuration_request_port_fwd_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct configuration_request_port_fwd_t configuration_request_port_fwd_t;

#include "port_fwd_entry.h"



typedef struct configuration_request_port_fwd_t {
    list_t *entries; //nonprimitive container

} configuration_request_port_fwd_t;

configuration_request_port_fwd_t *configuration_request_port_fwd_create(
    list_t *entries
);

void configuration_request_port_fwd_free(configuration_request_port_fwd_t *configuration_request_port_fwd);

configuration_request_port_fwd_t *configuration_request_port_fwd_parseFromJSON(cJSON *configuration_request_port_fwdJSON);

cJSON *configuration_request_port_fwd_convertToJSON(configuration_request_port_fwd_t *configuration_request_port_fwd);

#endif /* _configuration_request_port_fwd_H_ */

