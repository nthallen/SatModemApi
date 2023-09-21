#ifndef dns_settings_request_TEST
#define dns_settings_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_settings_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_settings_request.h"
dns_settings_request_t* instantiate_dns_settings_request(int include_optional);



dns_settings_request_t* instantiate_dns_settings_request(int include_optional) {
  dns_settings_request_t* dns_settings_request = NULL;
  if (include_optional) {
    dns_settings_request = dns_settings_request_create(
      "1.1.1.1",
      "1.0.0.1"
    );
  } else {
    dns_settings_request = dns_settings_request_create(
      "1.1.1.1",
      "1.0.0.1"
    );
  }

  return dns_settings_request;
}


#ifdef dns_settings_request_MAIN

void test_dns_settings_request(int include_optional) {
    dns_settings_request_t* dns_settings_request_1 = instantiate_dns_settings_request(include_optional);

	cJSON* jsondns_settings_request_1 = dns_settings_request_convertToJSON(dns_settings_request_1);
	printf("dns_settings_request :\n%s\n", cJSON_Print(jsondns_settings_request_1));
	dns_settings_request_t* dns_settings_request_2 = dns_settings_request_parseFromJSON(jsondns_settings_request_1);
	cJSON* jsondns_settings_request_2 = dns_settings_request_convertToJSON(dns_settings_request_2);
	printf("repeating dns_settings_request:\n%s\n", cJSON_Print(jsondns_settings_request_2));
}

int main() {
  test_dns_settings_request(1);
  test_dns_settings_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_settings_request_MAIN
#endif // dns_settings_request_TEST
