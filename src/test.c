#include <stdio.h>
#include <stdbool.h>

#include "utils/map_utils.h"

int main(void){
    char filename[] = "src/maps/desert_background.json";
    MapData* map = &(MapData) { 0 };
    load_map(map, filename);

    printf("Map width: %d\n", map->width);
    
    return 0;
}
