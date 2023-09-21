/*
 * ird_hw_test_report.h
 *
 * 
 */

#ifndef _ird_hw_test_report_H_
#define _ird_hw_test_report_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_hw_test_report_t ird_hw_test_report_t;




typedef struct ird_hw_test_report_t {
    int passed; //boolean
    double warnings; //numeric
    char *report; // string

} ird_hw_test_report_t;

ird_hw_test_report_t *ird_hw_test_report_create(
    int passed,
    double warnings,
    char *report
);

void ird_hw_test_report_free(ird_hw_test_report_t *ird_hw_test_report);

ird_hw_test_report_t *ird_hw_test_report_parseFromJSON(cJSON *ird_hw_test_reportJSON);

cJSON *ird_hw_test_report_convertToJSON(ird_hw_test_report_t *ird_hw_test_report);

#endif /* _ird_hw_test_report_H_ */

