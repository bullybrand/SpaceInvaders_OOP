#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"
#include <vector>

class Player {
private:
    Vector2 position;
    Texture2D shipTexture;
    float speed;
    float height;
    float width;
    void move();

public:
    Player(float swidth, float sheight);
    ~Player();

    void draw();
    void update();
};

#endif