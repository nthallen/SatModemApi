#ifndef configuration_request_TEST
#define configuration_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_request.h"
configuration_request_t* instantiate_configuration_request(int include_optional);

#include "test_dns_settings_request.c"
#include "test_eth_settings_request.c"
#include "test_configuration_request_gps.c"
#include "test_wi_fi_settings_request.c"
#include "test_configuration_request_ird.c"
#include "test_configuration_request_outgoing_firewall.c"
#include "test_configuration_request_port_fwd.c"


configuration_request_t* instantiate_configuration_request(int include_optional) {
  configuration_request_t* configuration_request = NULL;
  if (include_optional) {
    configuration_request = configuration_request_create(
      "0.2.0",
       // false, not to have infinite recursion
      instantiate_dns_settings_request(0),
       // false, not to have infinite recursion
      instantiate_eth_settings_request(0),
       // false, not to have infinite recursion
      instantiate_configuration_request_gps(0),
       // false, not to have infinite recursion
      instantiate_wi_fi_settings_request(0),
       // false, not to have infinite recursion
      instantiate_configuration_request_ird(0),
       // false, not to have infinite recursion
      instantiate_configuration_request_outgoing_firewall(0),
       // false, not to have infinite recursion
      instantiate_configuration_request_port_fwd(0)
    );
  } else {
    configuration_request = configuration_request_create(
      "0.2.0",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return configuration_request;
}


#ifdef configuration_request_MAIN

void test_configuration_request(int include_optional) {
    configuration_request_t* configuration_request_1 = instantiate_configuration_request(include_optional);

	cJSON* jsonconfiguration_request_1 = configuration_request_convertToJSON(configuration_request_1);
	printf("configuration_request :\n%s\n", cJSON_Print(jsonconfiguration_request_1));
	configuration_request_t* configuration_request_2 = configuration_request_parseFromJSON(jsonconfiguration_request_1);
	cJSON* jsonconfiguration_request_2 = configuration_request_convertToJSON(configuration_request_2);
	printf("repeating configuration_request:\n%s\n", cJSON_Print(jsonconfiguration_request_2));
}

int main() {
  test_configuration_request(1);
  test_configuration_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_request_MAIN
#endif // configuration_request_TEST
