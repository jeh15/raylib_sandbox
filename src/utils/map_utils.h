#ifndef MAP_UTILS
#define MAP_UTILS

#define MAX_MAP_SIZE 100
typedef struct MapData {
    int width;
    int height;
    int tilewidth;
    int tileheight;
    int data[MAX_MAP_SIZE];
} MapData;

extern void load_map(MapData* map, const char* map_filepath);

#endif