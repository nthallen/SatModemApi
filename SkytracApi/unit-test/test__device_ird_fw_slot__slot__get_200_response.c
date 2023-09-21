#ifndef _device_ird_fw_slot__slot__get_200_response_TEST
#define _device_ird_fw_slot__slot__get_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _device_ird_fw_slot__slot__get_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_device_ird_fw_slot__slot__get_200_response.h"
_device_ird_fw_slot__slot__get_200_response_t* instantiate__device_ird_fw_slot__slot__get_200_response(int include_optional);



_device_ird_fw_slot__slot__get_200_response_t* instantiate__device_ird_fw_slot__slot__get_200_response(int include_optional) {
  _device_ird_fw_slot__slot__get_200_response_t* _device_ird_fw_slot__slot__get_200_response = NULL;
  if (include_optional) {
    _device_ird_fw_slot__slot__get_200_response = _device_ird_fw_slot__slot__get_200_response_create(
      1,
      "1.0.2",
      "0",
      "0"
    );
  } else {
    _device_ird_fw_slot__slot__get_200_response = _device_ird_fw_slot__slot__get_200_response_create(
      1,
      "1.0.2",
      "0",
      "0"
    );
  }

  return _device_ird_fw_slot__slot__get_200_response;
}


#ifdef _device_ird_fw_slot__slot__get_200_response_MAIN

void test__device_ird_fw_slot__slot__get_200_response(int include_optional) {
    _device_ird_fw_slot__slot__get_200_response_t* _device_ird_fw_slot__slot__get_200_response_1 = instantiate__device_ird_fw_slot__slot__get_200_response(include_optional);

	cJSON* json_device_ird_fw_slot__slot__get_200_response_1 = _device_ird_fw_slot__slot__get_200_response_convertToJSON(_device_ird_fw_slot__slot__get_200_response_1);
	printf("_device_ird_fw_slot__slot__get_200_response :\n%s\n", cJSON_Print(json_device_ird_fw_slot__slot__get_200_response_1));
	_device_ird_fw_slot__slot__get_200_response_t* _device_ird_fw_slot__slot__get_200_response_2 = _device_ird_fw_slot__slot__get_200_response_parseFromJSON(json_device_ird_fw_slot__slot__get_200_response_1);
	cJSON* json_device_ird_fw_slot__slot__get_200_response_2 = _device_ird_fw_slot__slot__get_200_response_convertToJSON(_device_ird_fw_slot__slot__get_200_response_2);
	printf("repeating _device_ird_fw_slot__slot__get_200_response:\n%s\n", cJSON_Print(json_device_ird_fw_slot__slot__get_200_response_2));
}

int main() {
  test__device_ird_fw_slot__slot__get_200_response(1);
  test__device_ird_fw_slot__slot__get_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // _device_ird_fw_slot__slot__get_200_response_MAIN
#endif // _device_ird_fw_slot__slot__get_200_response_TEST
