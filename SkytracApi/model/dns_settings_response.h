/*
 * dns_settings_response.h
 *
 * 
 */

#ifndef _dns_settings_response_H_
#define _dns_settings_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dns_settings_response_t dns_settings_response_t;




typedef struct dns_settings_response_t {
    char *primary; // string
    char *secondary; // string

} dns_settings_response_t;

dns_settings_response_t *dns_settings_response_create(
    char *primary,
    char *secondary
);

void dns_settings_response_free(dns_settings_response_t *dns_settings_response);

dns_settings_response_t *dns_settings_response_parseFromJSON(cJSON *dns_settings_responseJSON);

cJSON *dns_settings_response_convertToJSON(dns_settings_response_t *dns_settings_response);

#endif /* _dns_settings_response_H_ */

