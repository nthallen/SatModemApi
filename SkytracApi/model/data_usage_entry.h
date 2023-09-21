/*
 * data_usage_entry.h
 *
 * 
 */

#ifndef _data_usage_entry_H_
#define _data_usage_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct data_usage_entry_t data_usage_entry_t;




typedef struct data_usage_entry_t {
    char *start; // string
    double rx; //numeric
    double tx; //numeric

} data_usage_entry_t;

data_usage_entry_t *data_usage_entry_create(
    char *start,
    double rx,
    double tx
);

void data_usage_entry_free(data_usage_entry_t *data_usage_entry);

data_usage_entry_t *data_usage_entry_parseFromJSON(cJSON *data_usage_entryJSON);

cJSON *data_usage_entry_convertToJSON(data_usage_entry_t *data_usage_entry);

#endif /* _data_usage_entry_H_ */

