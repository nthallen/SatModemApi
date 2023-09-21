/*
 * gps_fix.h
 *
 * 
 */

#ifndef _gps_fix_H_
#define _gps_fix_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gps_fix_t gps_fix_t;


// Enum TYPE for gps_fix

typedef enum  { quicksilver_web_api_gps_fix_TYPE_NULL = 0, quicksilver_web_api_gps_fix_TYPE_invalid, quicksilver_web_api_gps_fix_TYPE_time only, quicksilver_web_api_gps_fix_TYPE_dead reckoning, quicksilver_web_api_gps_fix_TYPE__2D, quicksilver_web_api_gps_fix_TYPE__3D } quicksilver_web_api_gps_fix_TYPE_e;

char* gps_fix_type_ToString(quicksilver_web_api_gps_fix_TYPE_e type);

quicksilver_web_api_gps_fix_TYPE_e gps_fix_type_FromString(char* type);



typedef struct gps_fix_t {
    double time; //numeric
    quicksilver_web_api_gps_fix_TYPE_e type; //enum
    double lat; //numeric
    double lng; //numeric
    double alt; //numeric
    double gvel; //numeric
    double vvel; //numeric
    double hdop; //numeric
    double vdop; //numeric
    double sats; //numeric

} gps_fix_t;

gps_fix_t *gps_fix_create(
    double time,
    quicksilver_web_api_gps_fix_TYPE_e type,
    double lat,
    double lng,
    double alt,
    double gvel,
    double vvel,
    double hdop,
    double vdop,
    double sats
);

void gps_fix_free(gps_fix_t *gps_fix);

gps_fix_t *gps_fix_parseFromJSON(cJSON *gps_fixJSON);

cJSON *gps_fix_convertToJSON(gps_fix_t *gps_fix);

#endif /* _gps_fix_H_ */

