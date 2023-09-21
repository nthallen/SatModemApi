#ifndef eth_settings_request_dhcp_TEST
#define eth_settings_request_dhcp_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eth_settings_request_dhcp_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eth_settings_request_dhcp.h"
eth_settings_request_dhcp_t* instantiate_eth_settings_request_dhcp(int include_optional);



eth_settings_request_dhcp_t* instantiate_eth_settings_request_dhcp(int include_optional) {
  eth_settings_request_dhcp_t* eth_settings_request_dhcp = NULL;
  if (include_optional) {
    eth_settings_request_dhcp = eth_settings_request_dhcp_create(
      1,
      list_createList()
    );
  } else {
    eth_settings_request_dhcp = eth_settings_request_dhcp_create(
      1,
      list_createList()
    );
  }

  return eth_settings_request_dhcp;
}


#ifdef eth_settings_request_dhcp_MAIN

void test_eth_settings_request_dhcp(int include_optional) {
    eth_settings_request_dhcp_t* eth_settings_request_dhcp_1 = instantiate_eth_settings_request_dhcp(include_optional);

	cJSON* jsoneth_settings_request_dhcp_1 = eth_settings_request_dhcp_convertToJSON(eth_settings_request_dhcp_1);
	printf("eth_settings_request_dhcp :\n%s\n", cJSON_Print(jsoneth_settings_request_dhcp_1));
	eth_settings_request_dhcp_t* eth_settings_request_dhcp_2 = eth_settings_request_dhcp_parseFromJSON(jsoneth_settings_request_dhcp_1);
	cJSON* jsoneth_settings_request_dhcp_2 = eth_settings_request_dhcp_convertToJSON(eth_settings_request_dhcp_2);
	printf("repeating eth_settings_request_dhcp:\n%s\n", cJSON_Print(jsoneth_settings_request_dhcp_2));
}

int main() {
  test_eth_settings_request_dhcp(1);
  test_eth_settings_request_dhcp(0);

  printf("Hello world \n");
  return 0;
}

#endif // eth_settings_request_dhcp_MAIN
#endif // eth_settings_request_dhcp_TEST
