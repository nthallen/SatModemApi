#ifndef device_info_TEST
#define device_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define device_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/device_info.h"
device_info_t* instantiate_device_info(int include_optional);



device_info_t* instantiate_device_info(int include_optional) {
  device_info_t* device_info = NULL;
  if (include_optional) {
    device_info = device_info_create(
      "Quicksilver 1.0.1r2339",
      "3232342",
      "B",
      "1.0.0",
      "32:34:55:22:22:11",
      "32:34:55:22:22:11"
    );
  } else {
    device_info = device_info_create(
      "Quicksilver 1.0.1r2339",
      "3232342",
      "B",
      "1.0.0",
      "32:34:55:22:22:11",
      "32:34:55:22:22:11"
    );
  }

  return device_info;
}


#ifdef device_info_MAIN

void test_device_info(int include_optional) {
    device_info_t* device_info_1 = instantiate_device_info(include_optional);

	cJSON* jsondevice_info_1 = device_info_convertToJSON(device_info_1);
	printf("device_info :\n%s\n", cJSON_Print(jsondevice_info_1));
	device_info_t* device_info_2 = device_info_parseFromJSON(jsondevice_info_1);
	cJSON* jsondevice_info_2 = device_info_convertToJSON(device_info_2);
	printf("repeating device_info:\n%s\n", cJSON_Print(jsondevice_info_2));
}

int main() {
  test_device_info(1);
  test_device_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // device_info_MAIN
#endif // device_info_TEST
