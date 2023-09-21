/*
 * patch_port_fwd_entry.h
 *
 * 
 */

#ifndef _patch_port_fwd_entry_H_
#define _patch_port_fwd_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct patch_port_fwd_entry_t patch_port_fwd_entry_t;


// Enum PROTOCOL for patch_port_fwd_entry

typedef enum  { quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_NULL = 0, quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_tcp, quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_udp, quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_both } quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e;

char* patch_port_fwd_entry_protocol_ToString(quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e protocol);

quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e patch_port_fwd_entry_protocol_FromString(char* protocol);



typedef struct patch_port_fwd_entry_t {
    char *name; // string
    double ext_port; //numeric
    char *int_addr; // string
    double int_port; //numeric
    quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e protocol; //enum

} patch_port_fwd_entry_t;

patch_port_fwd_entry_t *patch_port_fwd_entry_create(
    char *name,
    double ext_port,
    char *int_addr,
    double int_port,
    quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e protocol
);

void patch_port_fwd_entry_free(patch_port_fwd_entry_t *patch_port_fwd_entry);

patch_port_fwd_entry_t *patch_port_fwd_entry_parseFromJSON(cJSON *patch_port_fwd_entryJSON);

cJSON *patch_port_fwd_entry_convertToJSON(patch_port_fwd_entry_t *patch_port_fwd_entry);

#endif /* _patch_port_fwd_entry_H_ */

