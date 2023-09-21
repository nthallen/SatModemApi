#ifndef time_info_TEST
#define time_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define time_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/time_info.h"
time_info_t* instantiate_time_info(int include_optional);



time_info_t* instantiate_time_info(int include_optional) {
  time_info_t* time_info = NULL;
  if (include_optional) {
    time_info = time_info_create(
      1.337,
      1.337
    );
  } else {
    time_info = time_info_create(
      1.337,
      1.337
    );
  }

  return time_info;
}


#ifdef time_info_MAIN

void test_time_info(int include_optional) {
    time_info_t* time_info_1 = instantiate_time_info(include_optional);

	cJSON* jsontime_info_1 = time_info_convertToJSON(time_info_1);
	printf("time_info :\n%s\n", cJSON_Print(jsontime_info_1));
	time_info_t* time_info_2 = time_info_parseFromJSON(jsontime_info_1);
	cJSON* jsontime_info_2 = time_info_convertToJSON(time_info_2);
	printf("repeating time_info:\n%s\n", cJSON_Print(jsontime_info_2));
}

int main() {
  test_time_info(1);
  test_time_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // time_info_MAIN
#endif // time_info_TEST
