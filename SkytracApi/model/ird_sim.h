/*
 * ird_sim.h
 *
 * 
 */

#ifndef _ird_sim_H_
#define _ird_sim_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_sim_t ird_sim_t;


// Enum PRESENT for ird_sim

typedef enum  { quicksilver_web_api_ird_sim_PRESENT_NULL = 0, quicksilver_web_api_ird_sim_PRESENT__false, quicksilver_web_api_ird_sim_PRESENT__true, quicksilver_web_api_ird_sim_PRESENT_unknown } quicksilver_web_api_ird_sim_PRESENT_e;

char* ird_sim_present_ToString(quicksilver_web_api_ird_sim_PRESENT_e present);

quicksilver_web_api_ird_sim_PRESENT_e ird_sim_present_FromString(char* present);



typedef struct ird_sim_t {
    quicksilver_web_api_ird_sim_PRESENT_e present; //enum
    int connected; //boolean
    char *iccid; // string

} ird_sim_t;

ird_sim_t *ird_sim_create(
    quicksilver_web_api_ird_sim_PRESENT_e present,
    int connected,
    char *iccid
);

void ird_sim_free(ird_sim_t *ird_sim);

ird_sim_t *ird_sim_parseFromJSON(cJSON *ird_simJSON);

cJSON *ird_sim_convertToJSON(ird_sim_t *ird_sim);

#endif /* _ird_sim_H_ */

