#ifndef notification_TEST
#define notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification.h"
notification_t* instantiate_notification(int include_optional);



notification_t* instantiate_notification(int include_optional) {
  notification_t* notification = NULL;
  if (include_optional) {
    notification = notification_create(
      3,
      "2021-01-30T08:30Z",
      "Startup Error",
      "Failed to apply startup configuration for ..."
    );
  } else {
    notification = notification_create(
      3,
      "2021-01-30T08:30Z",
      "Startup Error",
      "Failed to apply startup configuration for ..."
    );
  }

  return notification;
}


#ifdef notification_MAIN

void test_notification(int include_optional) {
    notification_t* notification_1 = instantiate_notification(include_optional);

	cJSON* jsonnotification_1 = notification_convertToJSON(notification_1);
	printf("notification :\n%s\n", cJSON_Print(jsonnotification_1));
	notification_t* notification_2 = notification_parseFromJSON(jsonnotification_1);
	cJSON* jsonnotification_2 = notification_convertToJSON(notification_2);
	printf("repeating notification:\n%s\n", cJSON_Print(jsonnotification_2));
}

int main() {
  test_notification(1);
  test_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_MAIN
#endif // notification_TEST
