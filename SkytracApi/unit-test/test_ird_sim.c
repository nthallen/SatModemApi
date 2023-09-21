#ifndef ird_sim_TEST
#define ird_sim_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ird_sim_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ird_sim.h"
ird_sim_t* instantiate_ird_sim(int include_optional);



ird_sim_t* instantiate_ird_sim(int include_optional) {
  ird_sim_t* ird_sim = NULL;
  if (include_optional) {
    ird_sim = ird_sim_create(
      quicksilver_web_api_ird_sim_PRESENT_"yes",
      1,
      "0"
    );
  } else {
    ird_sim = ird_sim_create(
      quicksilver_web_api_ird_sim_PRESENT_"yes",
      1,
      "0"
    );
  }

  return ird_sim;
}


#ifdef ird_sim_MAIN

void test_ird_sim(int include_optional) {
    ird_sim_t* ird_sim_1 = instantiate_ird_sim(include_optional);

	cJSON* jsonird_sim_1 = ird_sim_convertToJSON(ird_sim_1);
	printf("ird_sim :\n%s\n", cJSON_Print(jsonird_sim_1));
	ird_sim_t* ird_sim_2 = ird_sim_parseFromJSON(jsonird_sim_1);
	cJSON* jsonird_sim_2 = ird_sim_convertToJSON(ird_sim_2);
	printf("repeating ird_sim:\n%s\n", cJSON_Print(jsonird_sim_2));
}

int main() {
  test_ird_sim(1);
  test_ird_sim(0);

  printf("Hello world \n");
  return 0;
}

#endif // ird_sim_MAIN
#endif // ird_sim_TEST
