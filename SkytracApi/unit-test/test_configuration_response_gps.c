#ifndef configuration_response_gps_TEST
#define configuration_response_gps_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_response_gps_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_response_gps.h"
configuration_response_gps_t* instantiate_configuration_response_gps(int include_optional);



configuration_response_gps_t* instantiate_configuration_response_gps(int include_optional) {
  configuration_response_gps_t* configuration_response_gps = NULL;
  if (include_optional) {
    configuration_response_gps = configuration_response_gps_create(
      1,
      1,
      quicksilver_web_api_configuration_response_gps__portable
    );
  } else {
    configuration_response_gps = configuration_response_gps_create(
      1,
      1,
      quicksilver_web_api_configuration_response_gps__portable
    );
  }

  return configuration_response_gps;
}


#ifdef configuration_response_gps_MAIN

void test_configuration_response_gps(int include_optional) {
    configuration_response_gps_t* configuration_response_gps_1 = instantiate_configuration_response_gps(include_optional);

	cJSON* jsonconfiguration_response_gps_1 = configuration_response_gps_convertToJSON(configuration_response_gps_1);
	printf("configuration_response_gps :\n%s\n", cJSON_Print(jsonconfiguration_response_gps_1));
	configuration_response_gps_t* configuration_response_gps_2 = configuration_response_gps_parseFromJSON(jsonconfiguration_response_gps_1);
	cJSON* jsonconfiguration_response_gps_2 = configuration_response_gps_convertToJSON(configuration_response_gps_2);
	printf("repeating configuration_response_gps:\n%s\n", cJSON_Print(jsonconfiguration_response_gps_2));
}

int main() {
  test_configuration_response_gps(1);
  test_configuration_response_gps(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_response_gps_MAIN
#endif // configuration_response_gps_TEST
