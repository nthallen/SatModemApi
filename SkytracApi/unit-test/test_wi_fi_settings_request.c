#ifndef wi_fi_settings_request_TEST
#define wi_fi_settings_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wi_fi_settings_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wi_fi_settings_request.h"
wi_fi_settings_request_t* instantiate_wi_fi_settings_request(int include_optional);

#include "test_eth_settings_request_dhcp.c"


wi_fi_settings_request_t* instantiate_wi_fi_settings_request(int include_optional) {
  wi_fi_settings_request_t* wi_fi_settings_request = NULL;
  if (include_optional) {
    wi_fi_settings_request = wi_fi_settings_request_create(
      1,
      "192.168.2.1",
      "255.255.255.0",
      "MyNetwork",
      1,
      quicksilver_web_api_wi_fi_settings_request_SECURITY_"wpa2",
      "Quicksilver123456",
       // false, not to have infinite recursion
      instantiate_eth_settings_request_dhcp(0)
    );
  } else {
    wi_fi_settings_request = wi_fi_settings_request_create(
      1,
      "192.168.2.1",
      "255.255.255.0",
      "MyNetwork",
      1,
      quicksilver_web_api_wi_fi_settings_request_SECURITY_"wpa2",
      "Quicksilver123456",
      NULL
    );
  }

  return wi_fi_settings_request;
}


#ifdef wi_fi_settings_request_MAIN

void test_wi_fi_settings_request(int include_optional) {
    wi_fi_settings_request_t* wi_fi_settings_request_1 = instantiate_wi_fi_settings_request(include_optional);

	cJSON* jsonwi_fi_settings_request_1 = wi_fi_settings_request_convertToJSON(wi_fi_settings_request_1);
	printf("wi_fi_settings_request :\n%s\n", cJSON_Print(jsonwi_fi_settings_request_1));
	wi_fi_settings_request_t* wi_fi_settings_request_2 = wi_fi_settings_request_parseFromJSON(jsonwi_fi_settings_request_1);
	cJSON* jsonwi_fi_settings_request_2 = wi_fi_settings_request_convertToJSON(wi_fi_settings_request_2);
	printf("repeating wi_fi_settings_request:\n%s\n", cJSON_Print(jsonwi_fi_settings_request_2));
}

int main() {
  test_wi_fi_settings_request(1);
  test_wi_fi_settings_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // wi_fi_settings_request_MAIN
#endif // wi_fi_settings_request_TEST
