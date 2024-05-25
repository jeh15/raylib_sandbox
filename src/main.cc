#include "raylib.h"
#include <Eigen/Dense>

// Define Constants:
#define PLAYER_BASE_SIZE 20.0f
#define PLAYER_SPEED 6.0f
#define PLAYER_MAX_SPEED 10

#define METEORS_SPEED 2
#define MAX_BIG_METEORS 4
#define MAX_MEDIUM_METEORS 8
#define MAX_SMALL_METEORS 16

struct Player {
    Vector2 position;
    Vector2 speed;
    float acceleration;
    float rotation;
    Vector3 collider;
    Color color;
};

struct Shoot {
    Vector2 position;
    Vector2 speed;
    float radius;
    float rotation;
    int lifeSpawn;
    bool active;
    Color color;
};

struct Meteor {
    Vector2 position;
    Vector2 speed;
    float radius;
    bool active;
    Color color;
};

