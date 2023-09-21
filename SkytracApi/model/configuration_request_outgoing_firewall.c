#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "configuration_request_outgoing_firewall.h"



configuration_request_outgoing_firewall_t *configuration_request_outgoing_firewall_create(
    list_t *rules
    ) {
    configuration_request_outgoing_firewall_t *configuration_request_outgoing_firewall_local_var = malloc(sizeof(configuration_request_outgoing_firewall_t));
    if (!configuration_request_outgoing_firewall_local_var) {
        return NULL;
    }
    configuration_request_outgoing_firewall_local_var->rules = rules;

    return configuration_request_outgoing_firewall_local_var;
}


void configuration_request_outgoing_firewall_free(configuration_request_outgoing_firewall_t *configuration_request_outgoing_firewall) {
    if(NULL == configuration_request_outgoing_firewall){
        return ;
    }
    listEntry_t *listEntry;
    if (configuration_request_outgoing_firewall->rules) {
        list_ForEach(listEntry, configuration_request_outgoing_firewall->rules) {
            outgoing_firewall_rule_free(listEntry->data);
        }
        list_freeList(configuration_request_outgoing_firewall->rules);
        configuration_request_outgoing_firewall->rules = NULL;
    }
    free(configuration_request_outgoing_firewall);
}

cJSON *configuration_request_outgoing_firewall_convertToJSON(configuration_request_outgoing_firewall_t *configuration_request_outgoing_firewall) {
    cJSON *item = cJSON_CreateObject();

    // configuration_request_outgoing_firewall->rules
    if(configuration_request_outgoing_firewall->rules) {
    cJSON *rules = cJSON_AddArrayToObject(item, "rules");
    if(rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rulesListEntry;
    if (configuration_request_outgoing_firewall->rules) {
    list_ForEach(rulesListEntry, configuration_request_outgoing_firewall->rules) {
    cJSON *itemLocal = outgoing_firewall_rule_convertToJSON(rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rules, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

configuration_request_outgoing_firewall_t *configuration_request_outgoing_firewall_parseFromJSON(cJSON *configuration_request_outgoing_firewallJSON){

    configuration_request_outgoing_firewall_t *configuration_request_outgoing_firewall_local_var = NULL;

    // define the local list for configuration_request_outgoing_firewall->rules
    list_t *rulesList = NULL;

    // configuration_request_outgoing_firewall->rules
    cJSON *rules = cJSON_GetObjectItemCaseSensitive(configuration_request_outgoing_firewallJSON, "rules");
    if (rules) { 
    cJSON *rules_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rules)){
        goto end; //nonprimitive container
    }

    rulesList = list_createList();

    cJSON_ArrayForEach(rules_local_nonprimitive,rules )
    {
        if(!cJSON_IsObject(rules_local_nonprimitive)){
            goto end;
        }
        outgoing_firewall_rule_t *rulesItem = outgoing_firewall_rule_parseFromJSON(rules_local_nonprimitive);

        list_addElement(rulesList, rulesItem);
    }
    }


    configuration_request_outgoing_firewall_local_var = configuration_request_outgoing_firewall_create (
        rules ? rulesList : NULL
        );

    return configuration_request_outgoing_firewall_local_var;
end:
    if (rulesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rulesList) {
            outgoing_firewall_rule_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rulesList);
        rulesList = NULL;
    }
    return NULL;

}
