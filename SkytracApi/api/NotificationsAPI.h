#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/notification.h"


// Get the list of notifications
//
list_t*
NotificationsAPI_notificationsGet(apiClient_t *apiClient);


// Delete a notification
//
void
NotificationsAPI_notificationsIdDelete(apiClient_t *apiClient, double id );


