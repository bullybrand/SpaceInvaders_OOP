#include "player.h"

Player::Player(float swidth, float sheight){

    position = {swidth/2, sheight/2};
    speed = 10.0f;
    shipTexture = LoadTexture("assets/player.png");
    width = shipTexture.width* 0.3f;
    height = shipTexture.height* 0.3f;
}

Player::~Player()
{
    UnloadTexture(shipTexture);
}

void Player::move(){
    if (IsKeyDown(KEY_LEFT)) {position.x -= speed;}
    if (IsKeyDown(KEY_RIGHT)) {position.x += speed;}
    if (IsKeyDown(KEY_UP)) {position.y -= speed;}
    if (IsKeyDown(KEY_DOWN)) {position.y += speed;}

    if (position.x <0) {position.x = 0;}
    if (position.y <0) {position.y = 0;}

    if (position.x > GetScreenWidth() - width) {position.x = GetScreenWidth() - width;}
    if (position.y > GetScreenHeight() - height) {position.y = GetScreenHeight() - height;}
}
void Player::update(){
    move();
}

void Player::draw(){
    DrawTextureEx(shipTexture, position, 0.0f, 0.3f, WHITE);
}