#ifndef patch_outgoing_firewall_rule_TEST
#define patch_outgoing_firewall_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define patch_outgoing_firewall_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/patch_outgoing_firewall_rule.h"
patch_outgoing_firewall_rule_t* instantiate_patch_outgoing_firewall_rule(int include_optional);



patch_outgoing_firewall_rule_t* instantiate_patch_outgoing_firewall_rule(int include_optional) {
  patch_outgoing_firewall_rule_t* patch_outgoing_firewall_rule = NULL;
  if (include_optional) {
    patch_outgoing_firewall_rule = patch_outgoing_firewall_rule_create(
      "MyRule",
      quicksilver_web_api_patch_outgoing_firewall_rule_PROTOCOL_"tcp",
      "192.168.1.0/24",
      false,
      "5000-6000",
      false,
      quicksilver_web_api_patch_outgoing_firewall_rule_ACTION_accept
    );
  } else {
    patch_outgoing_firewall_rule = patch_outgoing_firewall_rule_create(
      "MyRule",
      quicksilver_web_api_patch_outgoing_firewall_rule_PROTOCOL_"tcp",
      "192.168.1.0/24",
      false,
      "5000-6000",
      false,
      quicksilver_web_api_patch_outgoing_firewall_rule_ACTION_accept
    );
  }

  return patch_outgoing_firewall_rule;
}


#ifdef patch_outgoing_firewall_rule_MAIN

void test_patch_outgoing_firewall_rule(int include_optional) {
    patch_outgoing_firewall_rule_t* patch_outgoing_firewall_rule_1 = instantiate_patch_outgoing_firewall_rule(include_optional);

	cJSON* jsonpatch_outgoing_firewall_rule_1 = patch_outgoing_firewall_rule_convertToJSON(patch_outgoing_firewall_rule_1);
	printf("patch_outgoing_firewall_rule :\n%s\n", cJSON_Print(jsonpatch_outgoing_firewall_rule_1));
	patch_outgoing_firewall_rule_t* patch_outgoing_firewall_rule_2 = patch_outgoing_firewall_rule_parseFromJSON(jsonpatch_outgoing_firewall_rule_1);
	cJSON* jsonpatch_outgoing_firewall_rule_2 = patch_outgoing_firewall_rule_convertToJSON(patch_outgoing_firewall_rule_2);
	printf("repeating patch_outgoing_firewall_rule:\n%s\n", cJSON_Print(jsonpatch_outgoing_firewall_rule_2));
}

int main() {
  test_patch_outgoing_firewall_rule(1);
  test_patch_outgoing_firewall_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // patch_outgoing_firewall_rule_MAIN
#endif // patch_outgoing_firewall_rule_TEST
