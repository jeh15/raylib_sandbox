#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "cJSON.h"
#include "utils/parse_utils.h"


#define MAX_MAP_SIZE 100
typedef struct MapData {
    int width;
    int height;
    int tilewidth;
    int tileheight;
    int data[MAX_MAP_SIZE];
} MapData;

int main(void){
    char* filename = "src/maps/desert_background.json";
    
    cJSON* parsed = parse_file(filename);

    cJSON* layers = NULL;
    cJSON* layer = NULL;
    
    cJSON* width = NULL;
    cJSON* height = NULL;
    cJSON* tilewidth = NULL;
    cJSON* tileheight = NULL;

    tilewidth = cJSON_GetObjectItemCaseSensitive(parsed, "tilewidth");
    tileheight = cJSON_GetObjectItemCaseSensitive(parsed, "tileheight");
    height = cJSON_GetObjectItemCaseSensitive(parsed, "height");
    width = cJSON_GetObjectItemCaseSensitive(parsed, "width");

    // Assign values to struct:
    MapData* map = &(MapData) { 0 };
    memcpy(&map->width, &width->valueint, sizeof(int));
    // map->width = *tmp;
    printf("Map width: %d\n", map->width);

    // map->width = width->valueint;
    map->height = height->valueint;
    map->tilewidth = tilewidth->valueint;
    map->tileheight = tileheight->valueint;

    layers = cJSON_GetObjectItemCaseSensitive(parsed, "layers");
    cJSON_ArrayForEach(layer, layers) {
        cJSON* data = cJSON_GetObjectItemCaseSensitive(layer, "data");
        cJSON* value = NULL;
        cJSON_ArrayForEach(value, data) {
            map->data[value->valueint] = value->valueint;
            printf("%d\n", map->data[value->valueint]);
        }
    }

    cJSON_Delete(parsed);

    printf("Map width: %d\n", map->width);

    return 0;
}
