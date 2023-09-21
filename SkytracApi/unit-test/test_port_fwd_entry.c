#ifndef port_fwd_entry_TEST
#define port_fwd_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define port_fwd_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/port_fwd_entry.h"
port_fwd_entry_t* instantiate_port_fwd_entry(int include_optional);



port_fwd_entry_t* instantiate_port_fwd_entry(int include_optional) {
  port_fwd_entry_t* port_fwd_entry = NULL;
  if (include_optional) {
    port_fwd_entry = port_fwd_entry_create(
      "MyServer",
      22,
      "192.168.1.201",
      22,
      quicksilver_web_api_port_fwd_entry_PROTOCOL_"tcp"
    );
  } else {
    port_fwd_entry = port_fwd_entry_create(
      "MyServer",
      22,
      "192.168.1.201",
      22,
      quicksilver_web_api_port_fwd_entry_PROTOCOL_"tcp"
    );
  }

  return port_fwd_entry;
}


#ifdef port_fwd_entry_MAIN

void test_port_fwd_entry(int include_optional) {
    port_fwd_entry_t* port_fwd_entry_1 = instantiate_port_fwd_entry(include_optional);

	cJSON* jsonport_fwd_entry_1 = port_fwd_entry_convertToJSON(port_fwd_entry_1);
	printf("port_fwd_entry :\n%s\n", cJSON_Print(jsonport_fwd_entry_1));
	port_fwd_entry_t* port_fwd_entry_2 = port_fwd_entry_parseFromJSON(jsonport_fwd_entry_1);
	cJSON* jsonport_fwd_entry_2 = port_fwd_entry_convertToJSON(port_fwd_entry_2);
	printf("repeating port_fwd_entry:\n%s\n", cJSON_Print(jsonport_fwd_entry_2));
}

int main() {
  test_port_fwd_entry(1);
  test_port_fwd_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // port_fwd_entry_MAIN
#endif // port_fwd_entry_TEST
