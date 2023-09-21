/*
 * time_info.h
 *
 * 
 */

#ifndef _time_info_H_
#define _time_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct time_info_t time_info_t;




typedef struct time_info_t {
    double system; //numeric
    double uptime; //numeric

} time_info_t;

time_info_t *time_info_create(
    double system,
    double uptime
);

void time_info_free(time_info_t *time_info);

time_info_t *time_info_parseFromJSON(cJSON *time_infoJSON);

cJSON *time_info_convertToJSON(time_info_t *time_info);

#endif /* _time_info_H_ */

