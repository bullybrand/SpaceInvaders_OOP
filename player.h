#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"
#include <vector>

struct Bullet{
    Vector2 pos;
    float speed;
};

class Player{
public:
    Vector2 position;
    float speed;

    Texture2D texture;

    std::vector<Bullet> bullets;

    Player(){
        position ={400,500};
        speed=5;

        texture=LoadTexture("ship.png");
    }

    ~Player(){
        UnloadTexture(texture);
    }

    void update(){
        if(IsKeyDown(KEY_LEFT))position.x-=speed;
        if(IsKeyDown(KEY_RIGHT))position.x+=speed;
        if(IsKeyDown(KEY_UP))position.y-=speed;
        if(IsKeyDown(KEY_DOWN))position.y+=speed;

        if(IsKeyPressed(KEY_SPACE)){
            Bullet b;
            b.pos ={position.x + texture.width*0.25f/2 , position.y};
            b.speed=7;
            bullets.push_back(b);
        }

        for(int i=0;i<bullets.size();i++){
            bullets[i].pos.y-=bullets[i].speed;
        }
    }

    void draw(){
        DrawTextureEx(texture,position,0,0.25f,WHITE);

        for(int i=0;i<bullets.size();i++){
            DrawCircle(bullets[i].pos.x,bullets[i].pos.y,5,RED);
        }
    }
};

#endif