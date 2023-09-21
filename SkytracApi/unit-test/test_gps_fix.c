#ifndef gps_fix_TEST
#define gps_fix_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gps_fix_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gps_fix.h"
gps_fix_t* instantiate_gps_fix(int include_optional);



gps_fix_t* instantiate_gps_fix(int include_optional) {
  gps_fix_t* gps_fix = NULL;
  if (include_optional) {
    gps_fix = gps_fix_create(
      1.337,
      quicksilver_web_api_gps_fix_TYPE_invalid,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    gps_fix = gps_fix_create(
      1.337,
      quicksilver_web_api_gps_fix_TYPE_invalid,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return gps_fix;
}


#ifdef gps_fix_MAIN

void test_gps_fix(int include_optional) {
    gps_fix_t* gps_fix_1 = instantiate_gps_fix(include_optional);

	cJSON* jsongps_fix_1 = gps_fix_convertToJSON(gps_fix_1);
	printf("gps_fix :\n%s\n", cJSON_Print(jsongps_fix_1));
	gps_fix_t* gps_fix_2 = gps_fix_parseFromJSON(jsongps_fix_1);
	cJSON* jsongps_fix_2 = gps_fix_convertToJSON(gps_fix_2);
	printf("repeating gps_fix:\n%s\n", cJSON_Print(jsongps_fix_2));
}

int main() {
  test_gps_fix(1);
  test_gps_fix(0);

  printf("Hello world \n");
  return 0;
}

#endif // gps_fix_MAIN
#endif // gps_fix_TEST
