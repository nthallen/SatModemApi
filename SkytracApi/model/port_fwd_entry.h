/*
 * port_fwd_entry.h
 *
 * 
 */

#ifndef _port_fwd_entry_H_
#define _port_fwd_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct port_fwd_entry_t port_fwd_entry_t;


// Enum PROTOCOL for port_fwd_entry

typedef enum  { quicksilver_web_api_port_fwd_entry_PROTOCOL_NULL = 0, quicksilver_web_api_port_fwd_entry_PROTOCOL_tcp, quicksilver_web_api_port_fwd_entry_PROTOCOL_udp, quicksilver_web_api_port_fwd_entry_PROTOCOL_both } quicksilver_web_api_port_fwd_entry_PROTOCOL_e;

char* port_fwd_entry_protocol_ToString(quicksilver_web_api_port_fwd_entry_PROTOCOL_e protocol);

quicksilver_web_api_port_fwd_entry_PROTOCOL_e port_fwd_entry_protocol_FromString(char* protocol);



typedef struct port_fwd_entry_t {
    char *name; // string
    double ext_port; //numeric
    char *int_addr; // string
    double int_port; //numeric
    quicksilver_web_api_port_fwd_entry_PROTOCOL_e protocol; //enum

} port_fwd_entry_t;

port_fwd_entry_t *port_fwd_entry_create(
    char *name,
    double ext_port,
    char *int_addr,
    double int_port,
    quicksilver_web_api_port_fwd_entry_PROTOCOL_e protocol
);

void port_fwd_entry_free(port_fwd_entry_t *port_fwd_entry);

port_fwd_entry_t *port_fwd_entry_parseFromJSON(cJSON *port_fwd_entryJSON);

cJSON *port_fwd_entry_convertToJSON(port_fwd_entry_t *port_fwd_entry);

#endif /* _port_fwd_entry_H_ */

