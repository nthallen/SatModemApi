#ifndef ird_hw_TEST
#define ird_hw_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_hw_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_hw.h"
ird_hw_t* instantiate_ird_hw(int include_optional);



ird_hw_t* instantiate_ird_hw(int include_optional) {
  ird_hw_t* ird_hw = NULL;
  if (include_optional) {
    ird_hw = ird_hw_create(
      "TA3235",
      "0",
      "0",
      1.337,
      1.337
    );
  } else {
    ird_hw = ird_hw_create(
      "TA3235",
      "0",
      "0",
      1.337,
      1.337
    );
  }

  return ird_hw;
}


#ifdef ird_hw_MAIN

void test_ird_hw(int include_optional) {
    ird_hw_t* ird_hw_1 = instantiate_ird_hw(include_optional);

	cJSON* jsonird_hw_1 = ird_hw_convertToJSON(ird_hw_1);
	printf("ird_hw :\n%s\n", cJSON_Print(jsonird_hw_1));
	ird_hw_t* ird_hw_2 = ird_hw_parseFromJSON(jsonird_hw_1);
	cJSON* jsonird_hw_2 = ird_hw_convertToJSON(ird_hw_2);
	printf("repeating ird_hw:\n%s\n", cJSON_Print(jsonird_hw_2));
}

int main() {
  test_ird_hw(1);
  test_ird_hw(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_hw_MAIN
#endif // ird_hw_TEST
