#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "cJSON.h"


int parse_map(const char* const map_string){
    // Map Object Parameters:
    cJSON* backgroundcolor = NULL;
    cJSON* class = NULL;
    cJSON* compressionlevel = NULL;
    cJSON* height = NULL;
    cJSON* hexsidelength = NULL;
    cJSON* infinite = NULL;
    cJSON* layers = NULL;
    cJSON* layer = NULL;
    cJSON* nextlayerid = NULL;
    cJSON* nextobjectid = NULL;
    cJSON* orientation = NULL;
    cJSON* parallaxoriginx = NULL;
    cJSON* parallaxoriginy = NULL;
    cJSON* properties = NULL;
    cJSON* property = NULL;
    cJSON* renderorder = NULL;
    cJSON* staggeraxis = NULL;
    cJSON* staggerindex = NULL;
    cJSON* tiledversion = NULL;
    cJSON* tileheight = NULL;
    cJSON* tilewidth = NULL;
    cJSON* tilesets = NULL;
    cJSON* tileset = NULL;
    cJSON* type = NULL;
    cJSON* version = NULL;
    cJSON* width = NULL;

    cJSON* map = cJSON_Parse(map_string);

    if (map == NULL){
        const char* error_ptr = cJSON_GetErrorPtr();
        if (error_ptr != NULL){
            fprintf(stderr, "Error before: %s\n", error_ptr);
        }
    }

    // Parse Map Object:
    backgroundcolor = cJSON_GetObjectItemCaseSensitive(map, "backgroundcolor");
    if (cJSON_IsString(backgroundcolor) && (backgroundcolor->valuestring != NULL)){
        printf("Background Color: %s\n", backgroundcolor->valuestring);
    }

    class = cJSON_GetObjectItemCaseSensitive(map, "class");
    if (cJSON_IsString(class) && (class->valuestring != NULL)){
        printf("Class: %s\n", class->valuestring);
    }

    compressionlevel = cJSON_GetObjectItemCaseSensitive(map, "compressionlevel");
    if (cJSON_IsNumber(compressionlevel) && (!cJSON_IsNull(compressionlevel))){
        printf("Compression Level: %d\n", compressionlevel->valueint);
    }

    height = cJSON_GetObjectItemCaseSensitive(map, "height");
    if (cJSON_IsNumber(height) && (!cJSON_IsNull(height))){
        printf("Height: %d\n", height->valueint);
    }

    hexsidelength = cJSON_GetObjectItemCaseSensitive(map, "hexsidelength");
    if (cJSON_IsNumber(hexsidelength) && (!cJSON_IsNull(hexsidelength))){
        printf("Hex Side Length: %d\n", hexsidelength->valueint);
    }

    infinite = cJSON_GetObjectItemCaseSensitive(map, "infinite");
    if (cJSON_IsBool(infinite) && (!cJSON_IsNull(infinite))){
        printf("Infinite: %s\n", cJSON_IsTrue(infinite) ? "true" : "false");
    }

    nextlayerid = cJSON_GetObjectItemCaseSensitive(map, "nextlayerid");
    if (cJSON_IsNumber(nextlayerid) && (!cJSON_IsNull(nextlayerid))){
        printf("Next Layer ID: %d\n", nextlayerid->valueint);
    }

    nextobjectid = cJSON_GetObjectItemCaseSensitive(map, "nextobjectid");
    if (cJSON_IsNumber(nextobjectid) && (!cJSON_IsNull(nextobjectid))){
        printf("Next Object ID: %d\n", nextobjectid->valueint);
    }

    orientation = cJSON_GetObjectItemCaseSensitive(map, "orientation");
    if (cJSON_IsString(orientation) && (orientation->valuestring != NULL)){
        printf("Orientation: %s\n", orientation->valuestring);
    }

    parallaxoriginx = cJSON_GetObjectItemCaseSensitive(map, "parallaxoriginx");
    if (cJSON_IsNumber(parallaxoriginx) && (!cJSON_IsNull(parallaxoriginx))){
        printf("Parallax Origin X: %f\n", parallaxoriginx->valuedouble);
    }

    parallaxoriginy = cJSON_GetObjectItemCaseSensitive(map, "parallaxoriginy");
    if (cJSON_IsNumber(parallaxoriginy) && (!cJSON_IsNull(parallaxoriginy))){
        printf("Parallax Origin Y: %f\n", parallaxoriginy->valuedouble);
    }

    renderorder = cJSON_GetObjectItemCaseSensitive(map, "renderorder");
    if (cJSON_IsString(renderorder) && (renderorder->valuestring != NULL)){
        printf("Render Order: %s\n", renderorder->valuestring);
    }

    staggeraxis = cJSON_GetObjectItemCaseSensitive(map, "staggeraxis");
    if (cJSON_IsString(staggeraxis) && (staggeraxis->valuestring != NULL)){
        printf("Stagger Axis: %s\n", staggeraxis->valuestring);
    }

    staggerindex = cJSON_GetObjectItemCaseSensitive(map, "staggerindex");
    if (cJSON_IsString(staggerindex) && (staggerindex->valuestring != NULL)){
        printf("Stagger Index: %s\n", staggerindex->valuestring);
    }

    tiledversion = cJSON_GetObjectItemCaseSensitive(map, "tiledversion");
    if (cJSON_IsString(tiledversion) && (tiledversion->valuestring != NULL)){
        printf("Tiled Version: %s\n", tiledversion->valuestring);
    }

    tileheight = cJSON_GetObjectItemCaseSensitive(map, "tileheight");
    if (cJSON_IsNumber(tileheight) && (!cJSON_IsNull(tileheight))){
        printf("Tile Height: %d\n", tileheight->valueint);
    }

    tilewidth = cJSON_GetObjectItemCaseSensitive(map, "tilewidth");
    if (cJSON_IsNumber(tilewidth) && (!cJSON_IsNull(tilewidth))){
        printf("Tile Width: %d\n", tilewidth->valueint);
    }

    type = cJSON_GetObjectItemCaseSensitive(map, "type");
    if (cJSON_IsString(type) && (type->valuestring != NULL)){
        printf("Type: %s\n", type->valuestring);
    }

    version = cJSON_GetObjectItemCaseSensitive(map, "version");
    if (cJSON_IsString(version) && (version->valuestring != NULL)){
        printf("Version: %s\n", version->valuestring);
    }

    width = cJSON_GetObjectItemCaseSensitive(map, "width");
    if (cJSON_IsNumber(width) && (!cJSON_IsNull(width))){
        printf("Width: %d\n", width->valueint);
    }
    
    // Parse Layers: (Not complete)
    layers = cJSON_GetObjectItemCaseSensitive(map, "layers");
    cJSON_ArrayForEach(layer, layers){
        cJSON* class = NULL;
        cJSON* compression = NULL;
        cJSON* data = NULL;
        cJSON* draworder = NULL;
        cJSON* encoding = NULL;
        cJSON* height = NULL;
        cJSON* id = NULL;
        cJSON* image = NULL;
        cJSON* locked = NULL;
        cJSON* name = NULL;
        cJSON* offsetx = NULL;
        cJSON* offsety = NULL;
        cJSON* opacity = NULL;
        cJSON* parallaxx = NULL;
        cJSON* parallaxy = NULL;
        cJSON* repeatx = NULL;
        cJSON* repeaty = NULL;
        cJSON* startx = NULL;
        cJSON* starty = NULL;
        cJSON* tintcolor = NULL;
        cJSON* transparentcolor = NULL;
        cJSON* type = NULL;
        cJSON* visible = NULL;
        cJSON* width = NULL;
        cJSON* x = NULL;
        cJSON* y = NULL;

        class = cJSON_GetObjectItemCaseSensitive(layer, "class");
        if (cJSON_IsString(class) && (class->valuestring != NULL)){
            printf("Class: %s\n", class->valuestring);
        }

        compression = cJSON_GetObjectItemCaseSensitive(layer, "compression");
        if (cJSON_IsString(compression) && (compression->valuestring != NULL)){
            printf("Compression: %s\n", compression->valuestring);
        }

        draworder = cJSON_GetObjectItemCaseSensitive(layer, "draworder");
        if (cJSON_IsString(draworder) && (draworder->valuestring != NULL)){
            printf("Draw Order: %s\n", draworder->valuestring);
        }

        encoding = cJSON_GetObjectItemCaseSensitive(layer, "encoding");
        if (cJSON_IsString(encoding) && (encoding->valuestring != NULL)){
            printf("Encoding: %s\n", encoding->valuestring);
        }

        id = cJSON_GetObjectItemCaseSensitive(layer, "id");
        if (cJSON_IsNumber(id) && (!cJSON_IsNull(id))){
            printf("ID: %d\n", id->valueint);
        }

        image = cJSON_GetObjectItemCaseSensitive(layer, "image");
        if (cJSON_IsString(image) && (image->valuestring != NULL)){
            printf("Image: %s\n", image->valuestring);
        }

        locked = cJSON_GetObjectItemCaseSensitive(layer, "locked");
        if (cJSON_IsBool(locked) && (!cJSON_IsNull(locked))){
            printf("Locked: %s\n", cJSON_IsTrue(locked) ? "true" : "false");
        }

        name = cJSON_GetObjectItemCaseSensitive(layer, "name");
        if (cJSON_IsString(name) && (name->valuestring != NULL)){
            printf("Name: %s\n", name->valuestring);
        }

        offsetx = cJSON_GetObjectItemCaseSensitive(layer, "offsetx");
        if (cJSON_IsNumber(offsetx) && (!cJSON_IsNull(offsetx))){
            printf("Offset X: %f\n", offsetx->valuedouble);
        }

        offsety = cJSON_GetObjectItemCaseSensitive(layer, "offsety");
        if (cJSON_IsNumber(offsety) && (!cJSON_IsNull(offsety))){
            printf("Offset Y: %f\n", offsety->valuedouble);
        }

        opacity = cJSON_GetObjectItemCaseSensitive(layer, "opacity");
        if (cJSON_IsNumber(opacity) && (!cJSON_IsNull(opacity))){
            printf("Opacity: %f\n", opacity->valuedouble);
        }

        parallaxx = cJSON_GetObjectItemCaseSensitive(layer, "parallaxx");
        if (cJSON_IsNumber(parallaxx) && (!cJSON_IsNull(parallaxx))){
            printf("Parallax X: %f\n", parallaxx->valuedouble);
        }

        parallaxy = cJSON_GetObjectItemCaseSensitive(layer, "parallaxy");
        if (cJSON_IsNumber(parallaxy) && (!cJSON_IsNull(parallaxy))){
            printf("Parallax Y: %f\n", parallaxy->valuedouble);
        }

        repeatx = cJSON_GetObjectItemCaseSensitive(layer, "repeatx");
        if (cJSON_IsBool(repeatx) && (!cJSON_IsNull(repeatx))){
            printf("Repeat X: %d\n", repeatx->valueint);
        }

        repeaty = cJSON_GetObjectItemCaseSensitive(layer, "repeaty");
        if (cJSON_IsBool(repeaty) && (!cJSON_IsNull(repeaty))){
            printf("Repeat Y: %d\n", repeaty->valueint);
        }

        startx = cJSON_GetObjectItemCaseSensitive(layer, "startx");
        if (cJSON_IsNumber(startx) && (!cJSON_IsNull(startx))){
            printf("Start X: %d\n", startx->valueint);
        }

        starty = cJSON_GetObjectItemCaseSensitive(layer, "starty");
        if (cJSON_IsNumber(starty) && (!cJSON_IsNull(starty))){
            printf("Start Y: %d\n", starty->valueint);
        }

        tintcolor = cJSON_GetObjectItemCaseSensitive(layer, "tintcolor");
        if (cJSON_IsString(tintcolor) && (tintcolor->valuestring != NULL)){
            printf("Tint Color: %s\n", tintcolor->valuestring);
        }

        transparentcolor = cJSON_GetObjectItemCaseSensitive(layer, "transparentcolor");
        if (cJSON_IsString(transparentcolor) && (transparentcolor->valuestring != NULL)){
            printf("Transparent Color: %s\n", transparentcolor->valuestring);
        }

        type = cJSON_GetObjectItemCaseSensitive(layer, "type");
        if (cJSON_IsString(type) && (type->valuestring != NULL)){
            printf("Type: %s\n", type->valuestring);
        }

        visible = cJSON_GetObjectItemCaseSensitive(layer, "visible");
        if (cJSON_IsBool(visible) && (!cJSON_IsNull(visible))){
            printf("Visible: %s\n", cJSON_IsTrue(visible) ? "true" : "false");
        }

        x = cJSON_GetObjectItemCaseSensitive(layer, "x");
        if (cJSON_IsNumber(x) && (!cJSON_IsNull(x))){
            printf("X: %d\n", x->valueint);
        }

        y = cJSON_GetObjectItemCaseSensitive(layer, "y");
        if (cJSON_IsNumber(y) && (!cJSON_IsNull(y))){
            printf("Y: %d\n", y->valueint);
        }

        height = cJSON_GetObjectItemCaseSensitive(layer, "height");
        if (cJSON_IsNumber(height) && (!cJSON_IsNull(height))){
            printf("Height: %d\n", height->valueint);
        }

        width = cJSON_GetObjectItemCaseSensitive(layer, "width");
        if (cJSON_IsNumber(width) && (!cJSON_IsNull(width))){
            printf("Width: %d\n", width->valueint);
        }

        data = cJSON_GetObjectItemCaseSensitive(layer, "data");
        if (cJSON_IsArray(data)&& (!cJSON_IsNull(width))){
            if ((width != NULL) && (height != NULL)){
                printf("Data: %s\n", cJSON_Print(data));
            }
        }
    }

    // Parse Properties:
    properties = cJSON_GetObjectItemCaseSensitive(map, "properties");
    cJSON_ArrayForEach(property, properties){
        cJSON* name = NULL;
        cJSON* type = NULL;
        cJSON* propertytype = NULL;
        cJSON* value = NULL;

        name = cJSON_GetObjectItemCaseSensitive(property, "name");
        if (cJSON_IsString(name) && (name->valuestring != NULL)){
            printf("Name: %s\n", name->valuestring);
        }

        type = cJSON_GetObjectItemCaseSensitive(property, "type");
        if (cJSON_IsString(type) && (type->valuestring != NULL)){
            printf("Type: %s\n", type->valuestring);
        }

        propertytype = cJSON_GetObjectItemCaseSensitive(property, "propertytype");
        if (cJSON_IsString(propertytype) && (propertytype->valuestring != NULL)){
            printf("Property Type: %s\n", propertytype->valuestring);
        }

        value = cJSON_GetObjectItemCaseSensitive(property, "value");
        if (cJSON_IsString(value) && (value->valuestring != NULL)){
            printf("Value: %s\n", value->valuestring);
        }
    }

    // Parse Tilesets: (Not complete)
    tilesets = cJSON_GetObjectItemCaseSensitive(map, "tilesets");
    cJSON_ArrayForEach(tileset, tilesets){
        cJSON* firstgrid = NULL;
        cJSON* source = NULL;

        firstgrid = cJSON_GetObjectItemCaseSensitive(tileset, "firstgrid");
        if (cJSON_IsNumber(firstgrid) && (!cJSON_IsNull(firstgrid))){
            printf("First Grid: %d\n", firstgrid->valueint);
        }
        
        source = cJSON_GetObjectItemCaseSensitive(tileset, "source");
        if (cJSON_IsString(source) && (source->valuestring != NULL)){
            printf("Source: %s\n", source->valuestring);
        }
    }
    
    cJSON_Delete(map); 
    return 1;
}

int main(void){
    // Read JSON file to string:
    FILE *fp = fopen("src/maps/desert_background.json", "r"); 
    if (fp == NULL) { 
        printf("Error: Unable to open the file.\n"); 
        return 1; 
    } 

    char buffer[4096]; 
    fread(buffer, 1, sizeof(buffer), fp); 
    fclose(fp); 

    // Parse JSON string:
    parse_map(buffer);

    return 0;
}