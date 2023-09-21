/*
 * client.h
 *
 * 
 */

#ifndef _client_H_
#define _client_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct client_t client_t;




typedef struct client_t {
    char *intf; // string
    char *mac; // string
    char *hostname; // string
    char *addr; // string

} client_t;

client_t *client_create(
    char *intf,
    char *mac,
    char *hostname,
    char *addr
);

void client_free(client_t *client);

client_t *client_parseFromJSON(cJSON *clientJSON);

cJSON *client_convertToJSON(client_t *client);

#endif /* _client_H_ */

