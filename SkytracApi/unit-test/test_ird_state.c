#ifndef ird_state_TEST
#define ird_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_state.h"
ird_state_t* instantiate_ird_state(int include_optional);



ird_state_t* instantiate_ird_state(int include_optional) {
  ird_state_t* ird_state = NULL;
  if (include_optional) {
    ird_state = ird_state_create(
    );
  } else {
    ird_state = ird_state_create(
    );
  }

  return ird_state;
}


#ifdef ird_state_MAIN

void test_ird_state(int include_optional) {
    ird_state_t* ird_state_1 = instantiate_ird_state(include_optional);

	cJSON* jsonird_state_1 = ird_state_convertToJSON(ird_state_1);
	printf("ird_state :\n%s\n", cJSON_Print(jsonird_state_1));
	ird_state_t* ird_state_2 = ird_state_parseFromJSON(jsonird_state_1);
	cJSON* jsonird_state_2 = ird_state_convertToJSON(ird_state_2);
	printf("repeating ird_state:\n%s\n", cJSON_Print(jsonird_state_2));
}

int main() {
  test_ird_state(1);
  test_ird_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_state_MAIN
#endif // ird_state_TEST
