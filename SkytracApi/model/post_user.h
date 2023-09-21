/*
 * post_user.h
 *
 * 
 */

#ifndef _post_user_H_
#define _post_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct post_user_t post_user_t;


// Enum ROLE for post_user

typedef enum  { quicksilver_web_api_post_user_ROLE_NULL = 0, quicksilver_web_api_post_user_ROLE_admin, quicksilver_web_api_post_user_ROLE_standard } quicksilver_web_api_post_user_ROLE_e;

char* post_user_role_ToString(quicksilver_web_api_post_user_ROLE_e role);

quicksilver_web_api_post_user_ROLE_e post_user_role_FromString(char* role);



typedef struct post_user_t {
    char *name; // string
    quicksilver_web_api_post_user_ROLE_e role; //enum
    char *pwd; // string
    int locked; //boolean

} post_user_t;

post_user_t *post_user_create(
    char *name,
    quicksilver_web_api_post_user_ROLE_e role,
    char *pwd,
    int locked
);

void post_user_free(post_user_t *post_user);

post_user_t *post_user_parseFromJSON(cJSON *post_userJSON);

cJSON *post_user_convertToJSON(post_user_t *post_user);

#endif /* _post_user_H_ */

