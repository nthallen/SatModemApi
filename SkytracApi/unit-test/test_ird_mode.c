#ifndef ird_mode_TEST
#define ird_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_mode.h"
ird_mode_t* instantiate_ird_mode(int include_optional);



ird_mode_t* instantiate_ird_mode(int include_optional) {
  ird_mode_t* ird_mode = NULL;
  if (include_optional) {
    ird_mode = ird_mode_create(
    );
  } else {
    ird_mode = ird_mode_create(
    );
  }

  return ird_mode;
}


#ifdef ird_mode_MAIN

void test_ird_mode(int include_optional) {
    ird_mode_t* ird_mode_1 = instantiate_ird_mode(include_optional);

	cJSON* jsonird_mode_1 = ird_mode_convertToJSON(ird_mode_1);
	printf("ird_mode :\n%s\n", cJSON_Print(jsonird_mode_1));
	ird_mode_t* ird_mode_2 = ird_mode_parseFromJSON(jsonird_mode_1);
	cJSON* jsonird_mode_2 = ird_mode_convertToJSON(ird_mode_2);
	printf("repeating ird_mode:\n%s\n", cJSON_Print(jsonird_mode_2));
}

int main() {
  test_ird_mode(1);
  test_ird_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_mode_MAIN
#endif // ird_mode_TEST
