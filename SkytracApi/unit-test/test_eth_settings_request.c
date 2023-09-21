#ifndef eth_settings_request_TEST
#define eth_settings_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eth_settings_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eth_settings_request.h"
eth_settings_request_t* instantiate_eth_settings_request(int include_optional);

#include "test_eth_settings_request_dhcp.c"


eth_settings_request_t* instantiate_eth_settings_request(int include_optional) {
  eth_settings_request_t* eth_settings_request = NULL;
  if (include_optional) {
    eth_settings_request = eth_settings_request_create(
      "192.168.1.1",
      "255.255.255.0",
       // false, not to have infinite recursion
      instantiate_eth_settings_request_dhcp(0)
    );
  } else {
    eth_settings_request = eth_settings_request_create(
      "192.168.1.1",
      "255.255.255.0",
      NULL
    );
  }

  return eth_settings_request;
}


#ifdef eth_settings_request_MAIN

void test_eth_settings_request(int include_optional) {
    eth_settings_request_t* eth_settings_request_1 = instantiate_eth_settings_request(include_optional);

	cJSON* jsoneth_settings_request_1 = eth_settings_request_convertToJSON(eth_settings_request_1);
	printf("eth_settings_request :\n%s\n", cJSON_Print(jsoneth_settings_request_1));
	eth_settings_request_t* eth_settings_request_2 = eth_settings_request_parseFromJSON(jsoneth_settings_request_1);
	cJSON* jsoneth_settings_request_2 = eth_settings_request_convertToJSON(eth_settings_request_2);
	printf("repeating eth_settings_request:\n%s\n", cJSON_Print(jsoneth_settings_request_2));
}

int main() {
  test_eth_settings_request(1);
  test_eth_settings_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // eth_settings_request_MAIN
#endif // eth_settings_request_TEST
