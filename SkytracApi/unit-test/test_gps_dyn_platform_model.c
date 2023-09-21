#ifndef gps_dyn_platform_model_TEST
#define gps_dyn_platform_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gps_dyn_platform_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gps_dyn_platform_model.h"
gps_dyn_platform_model_t* instantiate_gps_dyn_platform_model(int include_optional);



gps_dyn_platform_model_t* instantiate_gps_dyn_platform_model(int include_optional) {
  gps_dyn_platform_model_t* gps_dyn_platform_model = NULL;
  if (include_optional) {
    gps_dyn_platform_model = gps_dyn_platform_model_create(
    );
  } else {
    gps_dyn_platform_model = gps_dyn_platform_model_create(
    );
  }

  return gps_dyn_platform_model;
}


#ifdef gps_dyn_platform_model_MAIN

void test_gps_dyn_platform_model(int include_optional) {
    gps_dyn_platform_model_t* gps_dyn_platform_model_1 = instantiate_gps_dyn_platform_model(include_optional);

	cJSON* jsongps_dyn_platform_model_1 = gps_dyn_platform_model_convertToJSON(gps_dyn_platform_model_1);
	printf("gps_dyn_platform_model :\n%s\n", cJSON_Print(jsongps_dyn_platform_model_1));
	gps_dyn_platform_model_t* gps_dyn_platform_model_2 = gps_dyn_platform_model_parseFromJSON(jsongps_dyn_platform_model_1);
	cJSON* jsongps_dyn_platform_model_2 = gps_dyn_platform_model_convertToJSON(gps_dyn_platform_model_2);
	printf("repeating gps_dyn_platform_model:\n%s\n", cJSON_Print(jsongps_dyn_platform_model_2));
}

int main() {
  test_gps_dyn_platform_model(1);
  test_gps_dyn_platform_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // gps_dyn_platform_model_MAIN
#endif // gps_dyn_platform_model_TEST
