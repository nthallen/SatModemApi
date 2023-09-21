/*
 * get_user.h
 *
 * 
 */

#ifndef _get_user_H_
#define _get_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_user_t get_user_t;


// Enum ROLE for get_user

typedef enum  { quicksilver_web_api_get_user_ROLE_NULL = 0, quicksilver_web_api_get_user_ROLE_admin, quicksilver_web_api_get_user_ROLE_standard } quicksilver_web_api_get_user_ROLE_e;

char* get_user_role_ToString(quicksilver_web_api_get_user_ROLE_e role);

quicksilver_web_api_get_user_ROLE_e get_user_role_FromString(char* role);



typedef struct get_user_t {
    char *name; // string
    quicksilver_web_api_get_user_ROLE_e role; //enum
    char *pwd; // string
    int locked; //boolean
    double sessions; //numeric

} get_user_t;

get_user_t *get_user_create(
    char *name,
    quicksilver_web_api_get_user_ROLE_e role,
    char *pwd,
    int locked,
    double sessions
);

void get_user_free(get_user_t *get_user);

get_user_t *get_user_parseFromJSON(cJSON *get_userJSON);

cJSON *get_user_convertToJSON(get_user_t *get_user);

#endif /* _get_user_H_ */

