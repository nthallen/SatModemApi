#ifndef wi_fi_settings_response_TEST
#define wi_fi_settings_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wi_fi_settings_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wi_fi_settings_response.h"
wi_fi_settings_response_t* instantiate_wi_fi_settings_response(int include_optional);



wi_fi_settings_response_t* instantiate_wi_fi_settings_response(int include_optional) {
  wi_fi_settings_response_t* wi_fi_settings_response = NULL;
  if (include_optional) {
    wi_fi_settings_response = wi_fi_settings_response_create(
      1,
      "192.168.2.1",
      "255.255.255.0",
      "MyNetwork",
      1,
      quicksilver_web_api_wi_fi_settings_response_SECURITY_"wpa2",
      "Quicksilver123456",
      null
    );
  } else {
    wi_fi_settings_response = wi_fi_settings_response_create(
      1,
      "192.168.2.1",
      "255.255.255.0",
      "MyNetwork",
      1,
      quicksilver_web_api_wi_fi_settings_response_SECURITY_"wpa2",
      "Quicksilver123456",
      null
    );
  }

  return wi_fi_settings_response;
}


#ifdef wi_fi_settings_response_MAIN

void test_wi_fi_settings_response(int include_optional) {
    wi_fi_settings_response_t* wi_fi_settings_response_1 = instantiate_wi_fi_settings_response(include_optional);

	cJSON* jsonwi_fi_settings_response_1 = wi_fi_settings_response_convertToJSON(wi_fi_settings_response_1);
	printf("wi_fi_settings_response :\n%s\n", cJSON_Print(jsonwi_fi_settings_response_1));
	wi_fi_settings_response_t* wi_fi_settings_response_2 = wi_fi_settings_response_parseFromJSON(jsonwi_fi_settings_response_1);
	cJSON* jsonwi_fi_settings_response_2 = wi_fi_settings_response_convertToJSON(wi_fi_settings_response_2);
	printf("repeating wi_fi_settings_response:\n%s\n", cJSON_Print(jsonwi_fi_settings_response_2));
}

int main() {
  test_wi_fi_settings_response(1);
  test_wi_fi_settings_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // wi_fi_settings_response_MAIN
#endif // wi_fi_settings_response_TEST
