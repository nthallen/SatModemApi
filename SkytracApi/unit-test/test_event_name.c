#ifndef event_name_TEST
#define event_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_name.h"
event_name_t* instantiate_event_name(int include_optional);



event_name_t* instantiate_event_name(int include_optional) {
  event_name_t* event_name = NULL;
  if (include_optional) {
    event_name = event_name_create(
    );
  } else {
    event_name = event_name_create(
    );
  }

  return event_name;
}


#ifdef event_name_MAIN

void test_event_name(int include_optional) {
    event_name_t* event_name_1 = instantiate_event_name(include_optional);

	cJSON* jsonevent_name_1 = event_name_convertToJSON(event_name_1);
	printf("event_name :\n%s\n", cJSON_Print(jsonevent_name_1));
	event_name_t* event_name_2 = event_name_parseFromJSON(jsonevent_name_1);
	cJSON* jsonevent_name_2 = event_name_convertToJSON(event_name_2);
	printf("repeating event_name:\n%s\n", cJSON_Print(jsonevent_name_2));
}

int main() {
  test_event_name(1);
  test_event_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_name_MAIN
#endif // event_name_TEST
