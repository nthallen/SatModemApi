#ifndef patch_port_fwd_entry_TEST
#define patch_port_fwd_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define patch_port_fwd_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/patch_port_fwd_entry.h"
patch_port_fwd_entry_t* instantiate_patch_port_fwd_entry(int include_optional);



patch_port_fwd_entry_t* instantiate_patch_port_fwd_entry(int include_optional) {
  patch_port_fwd_entry_t* patch_port_fwd_entry = NULL;
  if (include_optional) {
    patch_port_fwd_entry = patch_port_fwd_entry_create(
      "MyServer",
      22,
      "192.168.1.201",
      22,
      quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_"tcp"
    );
  } else {
    patch_port_fwd_entry = patch_port_fwd_entry_create(
      "MyServer",
      22,
      "192.168.1.201",
      22,
      quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_"tcp"
    );
  }

  return patch_port_fwd_entry;
}


#ifdef patch_port_fwd_entry_MAIN

void test_patch_port_fwd_entry(int include_optional) {
    patch_port_fwd_entry_t* patch_port_fwd_entry_1 = instantiate_patch_port_fwd_entry(include_optional);

	cJSON* jsonpatch_port_fwd_entry_1 = patch_port_fwd_entry_convertToJSON(patch_port_fwd_entry_1);
	printf("patch_port_fwd_entry :\n%s\n", cJSON_Print(jsonpatch_port_fwd_entry_1));
	patch_port_fwd_entry_t* patch_port_fwd_entry_2 = patch_port_fwd_entry_parseFromJSON(jsonpatch_port_fwd_entry_1);
	cJSON* jsonpatch_port_fwd_entry_2 = patch_port_fwd_entry_convertToJSON(patch_port_fwd_entry_2);
	printf("repeating patch_port_fwd_entry:\n%s\n", cJSON_Print(jsonpatch_port_fwd_entry_2));
}

int main() {
  test_patch_port_fwd_entry(1);
  test_patch_port_fwd_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // patch_port_fwd_entry_MAIN
#endif // patch_port_fwd_entry_TEST
