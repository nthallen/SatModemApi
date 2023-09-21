#ifndef configuration_request_outgoing_firewall_TEST
#define configuration_request_outgoing_firewall_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_request_outgoing_firewall_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_request_outgoing_firewall.h"
configuration_request_outgoing_firewall_t* instantiate_configuration_request_outgoing_firewall(int include_optional);



configuration_request_outgoing_firewall_t* instantiate_configuration_request_outgoing_firewall(int include_optional) {
  configuration_request_outgoing_firewall_t* configuration_request_outgoing_firewall = NULL;
  if (include_optional) {
    configuration_request_outgoing_firewall = configuration_request_outgoing_firewall_create(
      list_createList()
    );
  } else {
    configuration_request_outgoing_firewall = configuration_request_outgoing_firewall_create(
      list_createList()
    );
  }

  return configuration_request_outgoing_firewall;
}


#ifdef configuration_request_outgoing_firewall_MAIN

void test_configuration_request_outgoing_firewall(int include_optional) {
    configuration_request_outgoing_firewall_t* configuration_request_outgoing_firewall_1 = instantiate_configuration_request_outgoing_firewall(include_optional);

	cJSON* jsonconfiguration_request_outgoing_firewall_1 = configuration_request_outgoing_firewall_convertToJSON(configuration_request_outgoing_firewall_1);
	printf("configuration_request_outgoing_firewall :\n%s\n", cJSON_Print(jsonconfiguration_request_outgoing_firewall_1));
	configuration_request_outgoing_firewall_t* configuration_request_outgoing_firewall_2 = configuration_request_outgoing_firewall_parseFromJSON(jsonconfiguration_request_outgoing_firewall_1);
	cJSON* jsonconfiguration_request_outgoing_firewall_2 = configuration_request_outgoing_firewall_convertToJSON(configuration_request_outgoing_firewall_2);
	printf("repeating configuration_request_outgoing_firewall:\n%s\n", cJSON_Print(jsonconfiguration_request_outgoing_firewall_2));
}

int main() {
  test_configuration_request_outgoing_firewall(1);
  test_configuration_request_outgoing_firewall(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_request_outgoing_firewall_MAIN
#endif // configuration_request_outgoing_firewall_TEST
