#ifndef configuration_response_TEST
#define configuration_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_response.h"
configuration_response_t* instantiate_configuration_response(int include_optional);

#include "test_dns_settings_response.c"
#include "test_eth_settings_response.c"
#include "test_configuration_response_gps.c"
#include "test_wi_fi_settings_response.c"
#include "test_configuration_response_ird.c"
#include "test_configuration_response_outgoing_firewall.c"
#include "test_configuration_response_port_fwd.c"


configuration_response_t* instantiate_configuration_response(int include_optional) {
  configuration_response_t* configuration_response = NULL;
  if (include_optional) {
    configuration_response = configuration_response_create(
      "0.2.0",
      null,
      null,
       // false, not to have infinite recursion
      instantiate_configuration_response_gps(0),
      null,
       // false, not to have infinite recursion
      instantiate_configuration_response_ird(0),
       // false, not to have infinite recursion
      instantiate_configuration_response_outgoing_firewall(0),
       // false, not to have infinite recursion
      instantiate_configuration_response_port_fwd(0)
    );
  } else {
    configuration_response = configuration_response_create(
      "0.2.0",
      null,
      null,
      NULL,
      null,
      NULL,
      NULL,
      NULL
    );
  }

  return configuration_response;
}


#ifdef configuration_response_MAIN

void test_configuration_response(int include_optional) {
    configuration_response_t* configuration_response_1 = instantiate_configuration_response(include_optional);

	cJSON* jsonconfiguration_response_1 = configuration_response_convertToJSON(configuration_response_1);
	printf("configuration_response :\n%s\n", cJSON_Print(jsonconfiguration_response_1));
	configuration_response_t* configuration_response_2 = configuration_response_parseFromJSON(jsonconfiguration_response_1);
	cJSON* jsonconfiguration_response_2 = configuration_response_convertToJSON(configuration_response_2);
	printf("repeating configuration_response:\n%s\n", cJSON_Print(jsonconfiguration_response_2));
}

int main() {
  test_configuration_response(1);
  test_configuration_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_response_MAIN
#endif // configuration_response_TEST
