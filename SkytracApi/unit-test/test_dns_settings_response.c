#ifndef dns_settings_response_TEST
#define dns_settings_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_settings_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_settings_response.h"
dns_settings_response_t* instantiate_dns_settings_response(int include_optional);



dns_settings_response_t* instantiate_dns_settings_response(int include_optional) {
  dns_settings_response_t* dns_settings_response = NULL;
  if (include_optional) {
    dns_settings_response = dns_settings_response_create(
      "1.1.1.1",
      "1.0.0.1"
    );
  } else {
    dns_settings_response = dns_settings_response_create(
      "1.1.1.1",
      "1.0.0.1"
    );
  }

  return dns_settings_response;
}


#ifdef dns_settings_response_MAIN

void test_dns_settings_response(int include_optional) {
    dns_settings_response_t* dns_settings_response_1 = instantiate_dns_settings_response(include_optional);

	cJSON* jsondns_settings_response_1 = dns_settings_response_convertToJSON(dns_settings_response_1);
	printf("dns_settings_response :\n%s\n", cJSON_Print(jsondns_settings_response_1));
	dns_settings_response_t* dns_settings_response_2 = dns_settings_response_parseFromJSON(jsondns_settings_response_1);
	cJSON* jsondns_settings_response_2 = dns_settings_response_convertToJSON(dns_settings_response_2);
	printf("repeating dns_settings_response:\n%s\n", cJSON_Print(jsondns_settings_response_2));
}

int main() {
  test_dns_settings_response(1);
  test_dns_settings_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_settings_response_MAIN
#endif // dns_settings_response_TEST
