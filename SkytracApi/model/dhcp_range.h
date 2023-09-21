/*
 * dhcp_range.h
 *
 * 
 */

#ifndef _dhcp_range_H_
#define _dhcp_range_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dhcp_range_t dhcp_range_t;




typedef struct dhcp_range_t {
    char *start; // string
    char *end; // string
    int lease; //numeric

} dhcp_range_t;

dhcp_range_t *dhcp_range_create(
    char *start,
    char *end,
    int lease
);

void dhcp_range_free(dhcp_range_t *dhcp_range);

dhcp_range_t *dhcp_range_parseFromJSON(cJSON *dhcp_rangeJSON);

cJSON *dhcp_range_convertToJSON(dhcp_range_t *dhcp_range);

#endif /* _dhcp_range_H_ */

