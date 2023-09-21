#ifndef client_TEST
#define client_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define client_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/client.h"
client_t* instantiate_client(int include_optional);



client_t* instantiate_client(int include_optional) {
  client_t* client = NULL;
  if (include_optional) {
    client = client_create(
      "wifi",
      "32:34:55:22:22:11",
      "MyPC",
      "192.168.1.189"
    );
  } else {
    client = client_create(
      "wifi",
      "32:34:55:22:22:11",
      "MyPC",
      "192.168.1.189"
    );
  }

  return client;
}


#ifdef client_MAIN

void test_client(int include_optional) {
    client_t* client_1 = instantiate_client(include_optional);

	cJSON* jsonclient_1 = client_convertToJSON(client_1);
	printf("client :\n%s\n", cJSON_Print(jsonclient_1));
	client_t* client_2 = client_parseFromJSON(jsonclient_1);
	cJSON* jsonclient_2 = client_convertToJSON(client_2);
	printf("repeating client:\n%s\n", cJSON_Print(jsonclient_2));
}

int main() {
  test_client(1);
  test_client(0);

  printf("Hello world \n");
  return 0;
}

#endif // client_MAIN
#endif // client_TEST
