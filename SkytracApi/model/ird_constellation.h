/*
 * ird_constellation.h
 *
 * 
 */

#ifndef _ird_constellation_H_
#define _ird_constellation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_constellation_t ird_constellation_t;




typedef struct ird_constellation_t {
    int visible; //boolean
    double signal_bars; //numeric
    double signal_level; //numeric

} ird_constellation_t;

ird_constellation_t *ird_constellation_create(
    int visible,
    double signal_bars,
    double signal_level
);

void ird_constellation_free(ird_constellation_t *ird_constellation);

ird_constellation_t *ird_constellation_parseFromJSON(cJSON *ird_constellationJSON);

cJSON *ird_constellation_convertToJSON(ird_constellation_t *ird_constellation);

#endif /* _ird_constellation_H_ */

