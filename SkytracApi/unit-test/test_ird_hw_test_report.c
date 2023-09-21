#ifndef ird_hw_test_report_TEST
#define ird_hw_test_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_hw_test_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_hw_test_report.h"
ird_hw_test_report_t* instantiate_ird_hw_test_report(int include_optional);



ird_hw_test_report_t* instantiate_ird_hw_test_report(int include_optional) {
  ird_hw_test_report_t* ird_hw_test_report = NULL;
  if (include_optional) {
    ird_hw_test_report = ird_hw_test_report_create(
      1,
      1.337,
      "0"
    );
  } else {
    ird_hw_test_report = ird_hw_test_report_create(
      1,
      1.337,
      "0"
    );
  }

  return ird_hw_test_report;
}


#ifdef ird_hw_test_report_MAIN

void test_ird_hw_test_report(int include_optional) {
    ird_hw_test_report_t* ird_hw_test_report_1 = instantiate_ird_hw_test_report(include_optional);

	cJSON* jsonird_hw_test_report_1 = ird_hw_test_report_convertToJSON(ird_hw_test_report_1);
	printf("ird_hw_test_report :\n%s\n", cJSON_Print(jsonird_hw_test_report_1));
	ird_hw_test_report_t* ird_hw_test_report_2 = ird_hw_test_report_parseFromJSON(jsonird_hw_test_report_1);
	cJSON* jsonird_hw_test_report_2 = ird_hw_test_report_convertToJSON(ird_hw_test_report_2);
	printf("repeating ird_hw_test_report:\n%s\n", cJSON_Print(jsonird_hw_test_report_2));
}

int main() {
  test_ird_hw_test_report(1);
  test_ird_hw_test_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_hw_test_report_MAIN
#endif // ird_hw_test_report_TEST
