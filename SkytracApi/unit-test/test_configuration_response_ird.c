#ifndef configuration_response_ird_TEST
#define configuration_response_ird_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_response_ird_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_response_ird.h"
configuration_response_ird_t* instantiate_configuration_response_ird(int include_optional);



configuration_response_ird_t* instantiate_configuration_response_ird(int include_optional) {
  configuration_response_ird_t* configuration_response_ird = NULL;
  if (include_optional) {
    configuration_response_ird = configuration_response_ird_create(
      quicksilver_web_api_configuration_response_ird__inactive
    );
  } else {
    configuration_response_ird = configuration_response_ird_create(
      quicksilver_web_api_configuration_response_ird__inactive
    );
  }

  return configuration_response_ird;
}


#ifdef configuration_response_ird_MAIN

void test_configuration_response_ird(int include_optional) {
    configuration_response_ird_t* configuration_response_ird_1 = instantiate_configuration_response_ird(include_optional);

	cJSON* jsonconfiguration_response_ird_1 = configuration_response_ird_convertToJSON(configuration_response_ird_1);
	printf("configuration_response_ird :\n%s\n", cJSON_Print(jsonconfiguration_response_ird_1));
	configuration_response_ird_t* configuration_response_ird_2 = configuration_response_ird_parseFromJSON(jsonconfiguration_response_ird_1);
	cJSON* jsonconfiguration_response_ird_2 = configuration_response_ird_convertToJSON(configuration_response_ird_2);
	printf("repeating configuration_response_ird:\n%s\n", cJSON_Print(jsonconfiguration_response_ird_2));
}

int main() {
  test_configuration_response_ird(1);
  test_configuration_response_ird(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_response_ird_MAIN
#endif // configuration_response_ird_TEST
