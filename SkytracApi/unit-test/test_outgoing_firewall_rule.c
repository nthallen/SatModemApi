#ifndef outgoing_firewall_rule_TEST
#define outgoing_firewall_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define outgoing_firewall_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/outgoing_firewall_rule.h"
outgoing_firewall_rule_t* instantiate_outgoing_firewall_rule(int include_optional);



outgoing_firewall_rule_t* instantiate_outgoing_firewall_rule(int include_optional) {
  outgoing_firewall_rule_t* outgoing_firewall_rule = NULL;
  if (include_optional) {
    outgoing_firewall_rule = outgoing_firewall_rule_create(
      "MyRule",
      quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_"tcp",
      "192.168.1.0/24",
      false,
      "5000-6000",
      false,
      quicksilver_web_api_outgoing_firewall_rule_ACTION_accept
    );
  } else {
    outgoing_firewall_rule = outgoing_firewall_rule_create(
      "MyRule",
      quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_"tcp",
      "192.168.1.0/24",
      false,
      "5000-6000",
      false,
      quicksilver_web_api_outgoing_firewall_rule_ACTION_accept
    );
  }

  return outgoing_firewall_rule;
}


#ifdef outgoing_firewall_rule_MAIN

void test_outgoing_firewall_rule(int include_optional) {
    outgoing_firewall_rule_t* outgoing_firewall_rule_1 = instantiate_outgoing_firewall_rule(include_optional);

	cJSON* jsonoutgoing_firewall_rule_1 = outgoing_firewall_rule_convertToJSON(outgoing_firewall_rule_1);
	printf("outgoing_firewall_rule :\n%s\n", cJSON_Print(jsonoutgoing_firewall_rule_1));
	outgoing_firewall_rule_t* outgoing_firewall_rule_2 = outgoing_firewall_rule_parseFromJSON(jsonoutgoing_firewall_rule_1);
	cJSON* jsonoutgoing_firewall_rule_2 = outgoing_firewall_rule_convertToJSON(outgoing_firewall_rule_2);
	printf("repeating outgoing_firewall_rule:\n%s\n", cJSON_Print(jsonoutgoing_firewall_rule_2));
}

int main() {
  test_outgoing_firewall_rule(1);
  test_outgoing_firewall_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // outgoing_firewall_rule_MAIN
#endif // outgoing_firewall_rule_TEST
