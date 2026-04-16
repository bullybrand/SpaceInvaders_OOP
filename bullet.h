#pragma once
#include "raylib.h"

enum class BulletType {
    player,
    enemy
};

class Bullet{
    private:
       Vector2 position;
       Vector2 velocity;
       float speed;
       int damage;
       bool active;
       BulletType type;

    public:
    Bullet(Vector2 pos, Vector2 dir, float spd, int dmg, BulletType t);

    void Update();
    void Draw() const;

    bool IsActive() const;
    void Deactivate();

    Vector2 GetPosition() const;
};