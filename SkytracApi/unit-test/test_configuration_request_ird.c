#ifndef configuration_request_ird_TEST
#define configuration_request_ird_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_request_ird_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_request_ird.h"
configuration_request_ird_t* instantiate_configuration_request_ird(int include_optional);



configuration_request_ird_t* instantiate_configuration_request_ird(int include_optional) {
  configuration_request_ird_t* configuration_request_ird = NULL;
  if (include_optional) {
    configuration_request_ird = configuration_request_ird_create(
      quicksilver_web_api_configuration_request_ird__inactive
    );
  } else {
    configuration_request_ird = configuration_request_ird_create(
      quicksilver_web_api_configuration_request_ird__inactive
    );
  }

  return configuration_request_ird;
}


#ifdef configuration_request_ird_MAIN

void test_configuration_request_ird(int include_optional) {
    configuration_request_ird_t* configuration_request_ird_1 = instantiate_configuration_request_ird(include_optional);

	cJSON* jsonconfiguration_request_ird_1 = configuration_request_ird_convertToJSON(configuration_request_ird_1);
	printf("configuration_request_ird :\n%s\n", cJSON_Print(jsonconfiguration_request_ird_1));
	configuration_request_ird_t* configuration_request_ird_2 = configuration_request_ird_parseFromJSON(jsonconfiguration_request_ird_1);
	cJSON* jsonconfiguration_request_ird_2 = configuration_request_ird_convertToJSON(configuration_request_ird_2);
	printf("repeating configuration_request_ird:\n%s\n", cJSON_Print(jsonconfiguration_request_ird_2));
}

int main() {
  test_configuration_request_ird(1);
  test_configuration_request_ird(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_request_ird_MAIN
#endif // configuration_request_ird_TEST
