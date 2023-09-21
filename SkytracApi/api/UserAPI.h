#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/_user_change_password_post_request.h"
#include "../model/get_user.h"


// Change the session owner's password
//
void
UserAPI_userChangePasswordPost(apiClient_t *apiClient, _user_change_password_post_request_t * _user_change_password_post_request );


// Get the session owner
//
get_user_t*
UserAPI_userGet(apiClient_t *apiClient);


// Delete all of the sessions for the session owner. Not just this session.
//
void
UserAPI_userSessionsDelete(apiClient_t *apiClient);


