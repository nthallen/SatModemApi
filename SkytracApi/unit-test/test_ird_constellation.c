#ifndef ird_constellation_TEST
#define ird_constellation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_constellation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_constellation.h"
ird_constellation_t* instantiate_ird_constellation(int include_optional);



ird_constellation_t* instantiate_ird_constellation(int include_optional) {
  ird_constellation_t* ird_constellation = NULL;
  if (include_optional) {
    ird_constellation = ird_constellation_create(
      1,
      3,
      35
    );
  } else {
    ird_constellation = ird_constellation_create(
      1,
      3,
      35
    );
  }

  return ird_constellation;
}


#ifdef ird_constellation_MAIN

void test_ird_constellation(int include_optional) {
    ird_constellation_t* ird_constellation_1 = instantiate_ird_constellation(include_optional);

	cJSON* jsonird_constellation_1 = ird_constellation_convertToJSON(ird_constellation_1);
	printf("ird_constellation :\n%s\n", cJSON_Print(jsonird_constellation_1));
	ird_constellation_t* ird_constellation_2 = ird_constellation_parseFromJSON(jsonird_constellation_1);
	cJSON* jsonird_constellation_2 = ird_constellation_convertToJSON(ird_constellation_2);
	printf("repeating ird_constellation:\n%s\n", cJSON_Print(jsonird_constellation_2));
}

int main() {
  test_ird_constellation(1);
  test_ird_constellation(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_constellation_MAIN
#endif // ird_constellation_TEST
