#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/get_user.h"
#include "../model/patch_user.h"
#include "../model/post_user.h"


// Get all users
//
list_t*
UsersAPI_usersGet(apiClient_t *apiClient);


// Delete a user
//
void
UsersAPI_usersNameDelete(apiClient_t *apiClient, char * name );


// Modify a user
//
void
UsersAPI_usersNamePatch(apiClient_t *apiClient, char * name , patch_user_t * patch_user );


// Remove all of a user's sessions
//
void
UsersAPI_usersNameSessionsDelete(apiClient_t *apiClient, char * name );


// Add a user
//
void
UsersAPI_usersPost(apiClient_t *apiClient, post_user_t * post_user );


