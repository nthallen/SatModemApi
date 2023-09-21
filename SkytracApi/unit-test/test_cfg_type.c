#ifndef cfg_type_TEST
#define cfg_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cfg_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cfg_type.h"
cfg_type_t* instantiate_cfg_type(int include_optional);



cfg_type_t* instantiate_cfg_type(int include_optional) {
  cfg_type_t* cfg_type = NULL;
  if (include_optional) {
    cfg_type = cfg_type_create(
    );
  } else {
    cfg_type = cfg_type_create(
    );
  }

  return cfg_type;
}


#ifdef cfg_type_MAIN

void test_cfg_type(int include_optional) {
    cfg_type_t* cfg_type_1 = instantiate_cfg_type(include_optional);

	cJSON* jsoncfg_type_1 = cfg_type_convertToJSON(cfg_type_1);
	printf("cfg_type :\n%s\n", cJSON_Print(jsoncfg_type_1));
	cfg_type_t* cfg_type_2 = cfg_type_parseFromJSON(jsoncfg_type_1);
	cJSON* jsoncfg_type_2 = cfg_type_convertToJSON(cfg_type_2);
	printf("repeating cfg_type:\n%s\n", cJSON_Print(jsoncfg_type_2));
}

int main() {
  test_cfg_type(1);
  test_cfg_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // cfg_type_MAIN
#endif // cfg_type_TEST
