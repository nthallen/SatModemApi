#ifndef configuration_request_gps_TEST
#define configuration_request_gps_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_request_gps_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_request_gps.h"
configuration_request_gps_t* instantiate_configuration_request_gps(int include_optional);



configuration_request_gps_t* instantiate_configuration_request_gps(int include_optional) {
  configuration_request_gps_t* configuration_request_gps = NULL;
  if (include_optional) {
    configuration_request_gps = configuration_request_gps_create(
      1,
      1,
      quicksilver_web_api_configuration_request_gps__portable
    );
  } else {
    configuration_request_gps = configuration_request_gps_create(
      1,
      1,
      quicksilver_web_api_configuration_request_gps__portable
    );
  }

  return configuration_request_gps;
}


#ifdef configuration_request_gps_MAIN

void test_configuration_request_gps(int include_optional) {
    configuration_request_gps_t* configuration_request_gps_1 = instantiate_configuration_request_gps(include_optional);

	cJSON* jsonconfiguration_request_gps_1 = configuration_request_gps_convertToJSON(configuration_request_gps_1);
	printf("configuration_request_gps :\n%s\n", cJSON_Print(jsonconfiguration_request_gps_1));
	configuration_request_gps_t* configuration_request_gps_2 = configuration_request_gps_parseFromJSON(jsonconfiguration_request_gps_1);
	cJSON* jsonconfiguration_request_gps_2 = configuration_request_gps_convertToJSON(configuration_request_gps_2);
	printf("repeating configuration_request_gps:\n%s\n", cJSON_Print(jsonconfiguration_request_gps_2));
}

int main() {
  test_configuration_request_gps(1);
  test_configuration_request_gps(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_request_gps_MAIN
#endif // configuration_request_gps_TEST
