/*
 * ird_hw.h
 *
 * 
 */

#ifndef _ird_hw_H_
#define _ird_hw_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_hw_t ird_hw_t;




typedef struct ird_hw_t {
    char *version; // string
    char *serial; // string
    char *imei; // string
    double pa_temp; //numeric
    double board_temp; //numeric

} ird_hw_t;

ird_hw_t *ird_hw_create(
    char *version,
    char *serial,
    char *imei,
    double pa_temp,
    double board_temp
);

void ird_hw_free(ird_hw_t *ird_hw);

ird_hw_t *ird_hw_parseFromJSON(cJSON *ird_hwJSON);

cJSON *ird_hw_convertToJSON(ird_hw_t *ird_hw);

#endif /* _ird_hw_H_ */

