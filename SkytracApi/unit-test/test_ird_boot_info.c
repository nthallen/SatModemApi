#ifndef ird_boot_info_TEST
#define ird_boot_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_boot_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_boot_info.h"
ird_boot_info_t* instantiate_ird_boot_info(int include_optional);



ird_boot_info_t* instantiate_ird_boot_info(int include_optional) {
  ird_boot_info_t* ird_boot_info = NULL;
  if (include_optional) {
    ird_boot_info = ird_boot_info_create(
      quicksilver_web_api_ird_boot_info_IMAGETYPE_"production",
      "1.0.2",
      "0",
      quicksilver_web_api_ird_boot_info_BOOTSOURCE_"primary"
    );
  } else {
    ird_boot_info = ird_boot_info_create(
      quicksilver_web_api_ird_boot_info_IMAGETYPE_"production",
      "1.0.2",
      "0",
      quicksilver_web_api_ird_boot_info_BOOTSOURCE_"primary"
    );
  }

  return ird_boot_info;
}


#ifdef ird_boot_info_MAIN

void test_ird_boot_info(int include_optional) {
    ird_boot_info_t* ird_boot_info_1 = instantiate_ird_boot_info(include_optional);

	cJSON* jsonird_boot_info_1 = ird_boot_info_convertToJSON(ird_boot_info_1);
	printf("ird_boot_info :\n%s\n", cJSON_Print(jsonird_boot_info_1));
	ird_boot_info_t* ird_boot_info_2 = ird_boot_info_parseFromJSON(jsonird_boot_info_1);
	cJSON* jsonird_boot_info_2 = ird_boot_info_convertToJSON(ird_boot_info_2);
	printf("repeating ird_boot_info:\n%s\n", cJSON_Print(jsonird_boot_info_2));
}

int main() {
  test_ird_boot_info(1);
  test_ird_boot_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_boot_info_MAIN
#endif // ird_boot_info_TEST
