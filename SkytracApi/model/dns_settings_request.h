/*
 * dns_settings_request.h
 *
 * 
 */

#ifndef _dns_settings_request_H_
#define _dns_settings_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dns_settings_request_t dns_settings_request_t;




typedef struct dns_settings_request_t {
    char *primary; // string
    char *secondary; // string

} dns_settings_request_t;

dns_settings_request_t *dns_settings_request_create(
    char *primary,
    char *secondary
);

void dns_settings_request_free(dns_settings_request_t *dns_settings_request);

dns_settings_request_t *dns_settings_request_parseFromJSON(cJSON *dns_settings_requestJSON);

cJSON *dns_settings_request_convertToJSON(dns_settings_request_t *dns_settings_request);

#endif /* _dns_settings_request_H_ */

