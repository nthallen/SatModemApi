#ifndef data_usage_entry_TEST
#define data_usage_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_usage_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_usage_entry.h"
data_usage_entry_t* instantiate_data_usage_entry(int include_optional);



data_usage_entry_t* instantiate_data_usage_entry(int include_optional) {
  data_usage_entry_t* data_usage_entry = NULL;
  if (include_optional) {
    data_usage_entry = data_usage_entry_create(
      "2018-01-20T12:35",
      9237,
      9237
    );
  } else {
    data_usage_entry = data_usage_entry_create(
      "2018-01-20T12:35",
      9237,
      9237
    );
  }

  return data_usage_entry;
}


#ifdef data_usage_entry_MAIN

void test_data_usage_entry(int include_optional) {
    data_usage_entry_t* data_usage_entry_1 = instantiate_data_usage_entry(include_optional);

	cJSON* jsondata_usage_entry_1 = data_usage_entry_convertToJSON(data_usage_entry_1);
	printf("data_usage_entry :\n%s\n", cJSON_Print(jsondata_usage_entry_1));
	data_usage_entry_t* data_usage_entry_2 = data_usage_entry_parseFromJSON(jsondata_usage_entry_1);
	cJSON* jsondata_usage_entry_2 = data_usage_entry_convertToJSON(data_usage_entry_2);
	printf("repeating data_usage_entry:\n%s\n", cJSON_Print(jsondata_usage_entry_2));
}

int main() {
  test_data_usage_entry(1);
  test_data_usage_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_usage_entry_MAIN
#endif // data_usage_entry_TEST
