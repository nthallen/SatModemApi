#ifndef configuration_response_port_fwd_TEST
#define configuration_response_port_fwd_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define configuration_response_port_fwd_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/configuration_response_port_fwd.h"
configuration_response_port_fwd_t* instantiate_configuration_response_port_fwd(int include_optional);



configuration_response_port_fwd_t* instantiate_configuration_response_port_fwd(int include_optional) {
  configuration_response_port_fwd_t* configuration_response_port_fwd = NULL;
  if (include_optional) {
    configuration_response_port_fwd = configuration_response_port_fwd_create(
      list_createList()
    );
  } else {
    configuration_response_port_fwd = configuration_response_port_fwd_create(
      list_createList()
    );
  }

  return configuration_response_port_fwd;
}


#ifdef configuration_response_port_fwd_MAIN

void test_configuration_response_port_fwd(int include_optional) {
    configuration_response_port_fwd_t* configuration_response_port_fwd_1 = instantiate_configuration_response_port_fwd(include_optional);

	cJSON* jsonconfiguration_response_port_fwd_1 = configuration_response_port_fwd_convertToJSON(configuration_response_port_fwd_1);
	printf("configuration_response_port_fwd :\n%s\n", cJSON_Print(jsonconfiguration_response_port_fwd_1));
	configuration_response_port_fwd_t* configuration_response_port_fwd_2 = configuration_response_port_fwd_parseFromJSON(jsonconfiguration_response_port_fwd_1);
	cJSON* jsonconfiguration_response_port_fwd_2 = configuration_response_port_fwd_convertToJSON(configuration_response_port_fwd_2);
	printf("repeating configuration_response_port_fwd:\n%s\n", cJSON_Print(jsonconfiguration_response_port_fwd_2));
}

int main() {
  test_configuration_response_port_fwd(1);
  test_configuration_response_port_fwd(0);

  printf("Hello world \n");
  return 0;
}

#endif // configuration_response_port_fwd_MAIN
#endif // configuration_response_port_fwd_TEST
