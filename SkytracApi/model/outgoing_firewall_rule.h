/*
 * outgoing_firewall_rule.h
 *
 * 
 */

#ifndef _outgoing_firewall_rule_H_
#define _outgoing_firewall_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct outgoing_firewall_rule_t outgoing_firewall_rule_t;


// Enum PROTOCOL for outgoing_firewall_rule

typedef enum  { quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_NULL = 0, quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_any, quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_tcp, quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_udp, quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_icmp } quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e;

char* outgoing_firewall_rule_protocol_ToString(quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e protocol);

quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e outgoing_firewall_rule_protocol_FromString(char* protocol);

// Enum ACTION for outgoing_firewall_rule

typedef enum  { quicksilver_web_api_outgoing_firewall_rule_ACTION_NULL = 0, quicksilver_web_api_outgoing_firewall_rule_ACTION_accept, quicksilver_web_api_outgoing_firewall_rule_ACTION_drop } quicksilver_web_api_outgoing_firewall_rule_ACTION_e;

char* outgoing_firewall_rule_action_ToString(quicksilver_web_api_outgoing_firewall_rule_ACTION_e action);

quicksilver_web_api_outgoing_firewall_rule_ACTION_e outgoing_firewall_rule_action_FromString(char* action);



typedef struct outgoing_firewall_rule_t {
    char *name; // string
    quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e protocol; //enum
    char *dest_addr; // string
    int dest_addr_neg; //boolean
    char *dest_port; // string
    int dest_port_neg; //boolean
    quicksilver_web_api_outgoing_firewall_rule_ACTION_e action; //enum

} outgoing_firewall_rule_t;

outgoing_firewall_rule_t *outgoing_firewall_rule_create(
    char *name,
    quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e protocol,
    char *dest_addr,
    int dest_addr_neg,
    char *dest_port,
    int dest_port_neg,
    quicksilver_web_api_outgoing_firewall_rule_ACTION_e action
);

void outgoing_firewall_rule_free(outgoing_firewall_rule_t *outgoing_firewall_rule);

outgoing_firewall_rule_t *outgoing_firewall_rule_parseFromJSON(cJSON *outgoing_firewall_ruleJSON);

cJSON *outgoing_firewall_rule_convertToJSON(outgoing_firewall_rule_t *outgoing_firewall_rule);

#endif /* _outgoing_firewall_rule_H_ */

