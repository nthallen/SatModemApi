#ifndef ird_settings_TEST
#define ird_settings_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_settings_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_settings.h"
ird_settings_t* instantiate_ird_settings(int include_optional);



ird_settings_t* instantiate_ird_settings(int include_optional) {
  ird_settings_t* ird_settings = NULL;
  if (include_optional) {
    ird_settings = ird_settings_create(
      quicksilver_web_api_ird_settings__inactive
    );
  } else {
    ird_settings = ird_settings_create(
      quicksilver_web_api_ird_settings__inactive
    );
  }

  return ird_settings;
}


#ifdef ird_settings_MAIN

void test_ird_settings(int include_optional) {
    ird_settings_t* ird_settings_1 = instantiate_ird_settings(include_optional);

	cJSON* jsonird_settings_1 = ird_settings_convertToJSON(ird_settings_1);
	printf("ird_settings :\n%s\n", cJSON_Print(jsonird_settings_1));
	ird_settings_t* ird_settings_2 = ird_settings_parseFromJSON(jsonird_settings_1);
	cJSON* jsonird_settings_2 = ird_settings_convertToJSON(ird_settings_2);
	printf("repeating ird_settings:\n%s\n", cJSON_Print(jsonird_settings_2));
}

int main() {
  test_ird_settings(1);
  test_ird_settings(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_settings_MAIN
#endif // ird_settings_TEST
