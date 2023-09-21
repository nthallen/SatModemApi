#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/_session_refresh_post_200_response.h"
#include "../model/_sessions_post_201_response.h"


// Delete the session so that the tokens will no longer work
//
void
SessionAPI_sessionDelete(apiClient_t *apiClient);


// Generate new tokens for the current session and resets the session timeout
//
_session_refresh_post_200_response_t*
SessionAPI_sessionRefreshPost(apiClient_t *apiClient, char * body );


// Generate a new session for the user which will timeout and be deleted after 15 minutes
//
_sessions_post_201_response_t*
SessionAPI_sessionsPost(apiClient_t *apiClient);


