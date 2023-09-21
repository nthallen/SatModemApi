#ifndef dhcp_range_TEST
#define dhcp_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dhcp_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dhcp_range.h"
dhcp_range_t* instantiate_dhcp_range(int include_optional);



dhcp_range_t* instantiate_dhcp_range(int include_optional) {
  dhcp_range_t* dhcp_range = NULL;
  if (include_optional) {
    dhcp_range = dhcp_range_create(
      "10.10.1.100",
      "10.10.1.200",
      1440
    );
  } else {
    dhcp_range = dhcp_range_create(
      "10.10.1.100",
      "10.10.1.200",
      1440
    );
  }

  return dhcp_range;
}


#ifdef dhcp_range_MAIN

void test_dhcp_range(int include_optional) {
    dhcp_range_t* dhcp_range_1 = instantiate_dhcp_range(include_optional);

	cJSON* jsondhcp_range_1 = dhcp_range_convertToJSON(dhcp_range_1);
	printf("dhcp_range :\n%s\n", cJSON_Print(jsondhcp_range_1));
	dhcp_range_t* dhcp_range_2 = dhcp_range_parseFromJSON(jsondhcp_range_1);
	cJSON* jsondhcp_range_2 = dhcp_range_convertToJSON(dhcp_range_2);
	printf("repeating dhcp_range:\n%s\n", cJSON_Print(jsondhcp_range_2));
}

int main() {
  test_dhcp_range(1);
  test_dhcp_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // dhcp_range_MAIN
#endif // dhcp_range_TEST
