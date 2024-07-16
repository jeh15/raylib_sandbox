#include "raylib.h"

#define SPRITE_SHEET_WIDTH      4
#define SPRITE_SHEET_HEIGHT     4

typedef enum AnimationState {
    IDLE=0,
    WALK_LEFT,
    WALK_RIGHT,
    WALK_UP,
    WALK_DOWN
} AnimationState;

typedef struct Player {
    Texture2D sprite_sheet;
    Rectangle sprite_frame;
    AnimationState animation_state;
    Vector2 position;
    int sprite_iterator;
    int frame_iterator;
} Player;

void update_player(Player *player);


int main(void){
    const int screen_width = 160;
    const int screen_height = 160;

    InitWindow(screen_width, screen_height, "raylib - sprite test");

    // Load sprite_sheet texture:
    char filepath[] = "assets/ninja_adventure_assets/Actor/Characters/NinjaGreen/SeparateAnim/Walk.png";
    Texture2D sprite_sheet = LoadTexture(filepath);

    // Initialize sprite_frame:
    float sprite_width = (float)(sprite_sheet.width/SPRITE_SHEET_WIDTH);
    float sprite_height = (float)(sprite_sheet.height/SPRITE_SHEET_HEIGHT);
    Rectangle sprite_frame = {.x=0, .y=0, .width=sprite_width, .height=sprite_height};
    
    // Initialize position:
    Vector2 position = {
        .x=(float)(screen_width/2.0f), .y=(float)(screen_height/2.0f)
    };

    // Initialize Player:
    Player player = {
        .sprite_sheet = sprite_sheet,
        .sprite_frame = sprite_frame,
        .animation_state = IDLE,
        .position = position,
        .sprite_iterator = 0,
        .frame_iterator = 0,
    };
    Player* player_ptr = &player;

    SetTargetFPS(120);

    // Main game loop
    while (!WindowShouldClose()){

        update_player(player_ptr);

        BeginDrawing();

            ClearBackground(RAYWHITE);

            // Draw sprite_sheet required frame rectangle
            DrawTextureRec(player_ptr->sprite_sheet, player_ptr->sprite_frame, player_ptr->position, WHITE);

        EndDrawing();
    }

    // De-Initialization
    UnloadTexture(sprite_sheet);   // Unload texture

    CloseWindow();

    return 0;
}

void update_player(Player *player){
    float width = player->sprite_frame.width;
    float height = player->sprite_frame.height;
    
    // Move player:
    if (IsKeyDown(KEY_LEFT)){
        player->position.x -= 2.0f;
        player->sprite_frame.x = 2 * width;
        player->animation_state = WALK_LEFT;
    }
    if (IsKeyDown(KEY_RIGHT)){
        player->position.x += 2.0f;
        player->sprite_frame.x = 3 * width;
        player->animation_state = WALK_RIGHT;
    }
    if (IsKeyDown(KEY_UP)){
        player->position.y -= 2.0f;
        player->sprite_frame.x = 1 * width;
        player->animation_state = WALK_UP;
    }
    if (IsKeyDown(KEY_DOWN)){
        player->position.y += 2.0f;
        player->sprite_frame.x = 0 * width;
        player->animation_state = WALK_DOWN;
    }
    if (IsKeyUp(KEY_LEFT) && IsKeyUp(KEY_RIGHT) && IsKeyUp(KEY_UP) && IsKeyUp(KEY_DOWN)){
        player->animation_state = IDLE;
    }

    // Update frame iterator:
    const int animation_rate = 30;
    if (player->animation_state == IDLE){
        player->sprite_iterator = 0;
    }
    else { 
        if (player->frame_iterator % animation_rate == 0) {
            player->sprite_iterator = ++player->sprite_iterator % 4;
        }
    }

    // Update sprite_frame:
    player->sprite_frame.y = player->sprite_iterator * height;

    player->frame_iterator++;
}