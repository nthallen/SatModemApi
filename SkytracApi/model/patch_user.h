/*
 * patch_user.h
 *
 * 
 */

#ifndef _patch_user_H_
#define _patch_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct patch_user_t patch_user_t;


// Enum ROLE for patch_user

typedef enum  { quicksilver_web_api_patch_user_ROLE_NULL = 0, quicksilver_web_api_patch_user_ROLE_admin, quicksilver_web_api_patch_user_ROLE_standard } quicksilver_web_api_patch_user_ROLE_e;

char* patch_user_role_ToString(quicksilver_web_api_patch_user_ROLE_e role);

quicksilver_web_api_patch_user_ROLE_e patch_user_role_FromString(char* role);



typedef struct patch_user_t {
    char *name; // string
    quicksilver_web_api_patch_user_ROLE_e role; //enum
    char *pwd; // string
    int locked; //boolean

} patch_user_t;

patch_user_t *patch_user_create(
    char *name,
    quicksilver_web_api_patch_user_ROLE_e role,
    char *pwd,
    int locked
);

void patch_user_free(patch_user_t *patch_user);

patch_user_t *patch_user_parseFromJSON(cJSON *patch_userJSON);

cJSON *patch_user_convertToJSON(patch_user_t *patch_user);

#endif /* _patch_user_H_ */

