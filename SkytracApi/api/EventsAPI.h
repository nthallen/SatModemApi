#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/_socket_get_200_response.h"
#include "../model/event_name.h"

// Enum  for EventsAPI_eventsIdSubscriptionsNameGet
typedef enum  { quicksilver_web_api_eventsIdSubscriptionsNameGet__NULL = 0, quicksilver_web_api_eventsIdSubscriptionsNameGet__constellationStateUpdated, quicksilver_web_api_eventsIdSubscriptionsNameGet__gpsUpdated, quicksilver_web_api_eventsIdSubscriptionsNameGet__notificationAdded } quicksilver_web_api_eventsIdSubscriptionsNameGet_name_e;

// Enum  for EventsAPI_eventsIdSubscriptionsNamePut
typedef enum  { quicksilver_web_api_eventsIdSubscriptionsNamePut__NULL = 0, quicksilver_web_api_eventsIdSubscriptionsNamePut__constellationStateUpdated, quicksilver_web_api_eventsIdSubscriptionsNamePut__gpsUpdated, quicksilver_web_api_eventsIdSubscriptionsNamePut__notificationAdded } quicksilver_web_api_eventsIdSubscriptionsNamePut_name_e;


// Get the list of events that an event connection is subscribed to
//
list_t*
EventsAPI_eventsIdSubscriptionsGet(apiClient_t *apiClient, char * id );


// Get whether an event connection is subscribed to a specific event
//
int*
EventsAPI_eventsIdSubscriptionsNameGet(apiClient_t *apiClient, char * id , event_name_e name );


// Set whether an event connection is subscribed to a specific event
//
void
EventsAPI_eventsIdSubscriptionsNamePut(apiClient_t *apiClient, char * id , event_name_e name , int body );


// Set the list of events that an event connection is subscribed to
//
void
EventsAPI_eventsIdSubscriptionsPut(apiClient_t *apiClient, char * id , list_t * event_name );


// Start a WebSocket connection
//
// Establishes a WebSocket connection for receiving events messages. When the connection is first made, an \"id\" event will be sent to the connection with the data being a string ID that uniquely identifies the connection and which can be used with the /events API to subscribe or unsubscribe to other events. Initially, no event are subscribed to. 
//
_socket_get_200_response_t*
EventsAPI_socketGet(apiClient_t *apiClient);


