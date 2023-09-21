/*
 * wi_fi_settings_request.h
 *
 * 
 */

#ifndef _wi_fi_settings_request_H_
#define _wi_fi_settings_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wi_fi_settings_request_t wi_fi_settings_request_t;

#include "eth_settings_request_dhcp.h"

// Enum SECURITY for wi_fi_settings_request

typedef enum  { quicksilver_web_api_wi_fi_settings_request_SECURITY_NULL = 0, quicksilver_web_api_wi_fi_settings_request_SECURITY_open, quicksilver_web_api_wi_fi_settings_request_SECURITY_wpa2 } quicksilver_web_api_wi_fi_settings_request_SECURITY_e;

char* wi_fi_settings_request_security_ToString(quicksilver_web_api_wi_fi_settings_request_SECURITY_e security);

quicksilver_web_api_wi_fi_settings_request_SECURITY_e wi_fi_settings_request_security_FromString(char* security);



typedef struct wi_fi_settings_request_t {
    int enabled; //boolean
    char *addr; // string
    char *mask; // string
    char *ssid; // string
    int visible; //boolean
    quicksilver_web_api_wi_fi_settings_request_SECURITY_e security; //enum
    char *wpa2_pwd; // string
    struct eth_settings_request_dhcp_t *dhcp; //model

} wi_fi_settings_request_t;

wi_fi_settings_request_t *wi_fi_settings_request_create(
    int enabled,
    char *addr,
    char *mask,
    char *ssid,
    int visible,
    quicksilver_web_api_wi_fi_settings_request_SECURITY_e security,
    char *wpa2_pwd,
    eth_settings_request_dhcp_t *dhcp
);

void wi_fi_settings_request_free(wi_fi_settings_request_t *wi_fi_settings_request);

wi_fi_settings_request_t *wi_fi_settings_request_parseFromJSON(cJSON *wi_fi_settings_requestJSON);

cJSON *wi_fi_settings_request_convertToJSON(wi_fi_settings_request_t *wi_fi_settings_request);

#endif /* _wi_fi_settings_request_H_ */

