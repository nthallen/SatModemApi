#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_hw_test_report.h"



ird_hw_test_report_t *ird_hw_test_report_create(
    int passed,
    double warnings,
    char *report
    ) {
    ird_hw_test_report_t *ird_hw_test_report_local_var = malloc(sizeof(ird_hw_test_report_t));
    if (!ird_hw_test_report_local_var) {
        return NULL;
    }
    ird_hw_test_report_local_var->passed = passed;
    ird_hw_test_report_local_var->warnings = warnings;
    ird_hw_test_report_local_var->report = report;

    return ird_hw_test_report_local_var;
}


void ird_hw_test_report_free(ird_hw_test_report_t *ird_hw_test_report) {
    if(NULL == ird_hw_test_report){
        return ;
    }
    listEntry_t *listEntry;
    if (ird_hw_test_report->report) {
        free(ird_hw_test_report->report);
        ird_hw_test_report->report = NULL;
    }
    free(ird_hw_test_report);
}

cJSON *ird_hw_test_report_convertToJSON(ird_hw_test_report_t *ird_hw_test_report) {
    cJSON *item = cJSON_CreateObject();

    // ird_hw_test_report->passed
    if (!ird_hw_test_report->passed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "passed", ird_hw_test_report->passed) == NULL) {
    goto fail; //Bool
    }


    // ird_hw_test_report->warnings
    if (!ird_hw_test_report->warnings) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "warnings", ird_hw_test_report->warnings) == NULL) {
    goto fail; //Numeric
    }


    // ird_hw_test_report->report
    if (!ird_hw_test_report->report) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "report", ird_hw_test_report->report) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ird_hw_test_report_t *ird_hw_test_report_parseFromJSON(cJSON *ird_hw_test_reportJSON){

    ird_hw_test_report_t *ird_hw_test_report_local_var = NULL;

    // ird_hw_test_report->passed
    cJSON *passed = cJSON_GetObjectItemCaseSensitive(ird_hw_test_reportJSON, "passed");
    if (!passed) {
        goto end;
    }

    
    if(!cJSON_IsBool(passed))
    {
    goto end; //Bool
    }

    // ird_hw_test_report->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(ird_hw_test_reportJSON, "warnings");
    if (!warnings) {
        goto end;
    }

    
    if(!cJSON_IsNumber(warnings))
    {
    goto end; //Numeric
    }

    // ird_hw_test_report->report
    cJSON *report = cJSON_GetObjectItemCaseSensitive(ird_hw_test_reportJSON, "report");
    if (!report) {
        goto end;
    }

    
    if(!cJSON_IsString(report))
    {
    goto end; //String
    }


    ird_hw_test_report_local_var = ird_hw_test_report_create (
        passed->valueint,
        warnings->valuedouble,
        strdup(report->valuestring)
        );

    return ird_hw_test_report_local_var;
end:
    return NULL;

}
