#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cJSON.h"
#include "parse_utils.h"

#include "map_utils.h"

void load_map(MapData* map, const char* map_filepath){
    cJSON* parsed = parse_file(map_filepath);

    // Initialize map variables:
    cJSON* layers = NULL;
    cJSON* layer = NULL;

    cJSON* width = NULL;
    cJSON* height = NULL;
    cJSON* tilewidth = NULL;
    cJSON* tileheight = NULL;

    // Get values from JSON:
    tilewidth = cJSON_GetObjectItemCaseSensitive(parsed, "tilewidth");
    tileheight = cJSON_GetObjectItemCaseSensitive(parsed, "tileheight");
    height = cJSON_GetObjectItemCaseSensitive(parsed, "height");
    width = cJSON_GetObjectItemCaseSensitive(parsed, "width");

    // Assign values to struct:
    memcpy(&map->width, &width->valueint, sizeof(int));
    memcpy(&map->height, &height->valueint, sizeof(int));
    memcpy(&map->tilewidth, &tilewidth->valueint, sizeof(int));
    memcpy(&map->tileheight, &tileheight->valueint, sizeof(int));

    layers = cJSON_GetObjectItemCaseSensitive(parsed, "layers");
    cJSON_ArrayForEach(layer, layers) {
        cJSON* data = cJSON_GetObjectItemCaseSensitive(layer, "data");
        cJSON* value = NULL;
        int iterator = 0;
        cJSON_ArrayForEach(value, data) {
            if (iterator > MAX_MAP_SIZE){
                perror("Error in load_map: map size exceeds MAX_MAP_SIZE");
                abort();
            }
            memcpy(&map->data[iterator], &value->valueint, sizeof(int));
            iterator++;
        }
    }

    cJSON_Delete(parsed);
}