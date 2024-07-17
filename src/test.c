#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "cJSON.h"
#include "utils/parse_utils.h"

int main(void){
    char* filename = "src/maps/desert_background.json";
    
    cJSON* parsed = parse_file(filename);

    cJSON* layers = NULL;
    cJSON* layer = NULL;

    layers = cJSON_GetObjectItemCaseSensitive(parsed, "layers");
    cJSON_ArrayForEach(layer, layers) {
        cJSON* data = cJSON_GetObjectItemCaseSensitive(layer, "data");
        cJSON* value = NULL;
        cJSON_ArrayForEach(value, data) {
            printf("%d\n", value->valueint);
        }
    }

    return 0;
}
