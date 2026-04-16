#pragma once
#include "raylib.h"

enum class EnemyState {
    ALIVE,
    DEAD,
    ATTACKING
};

class Enemy {
protected:
    Vector2 position;
    int hp;
    float speed;
    EnemyState state;

public:
    Enemy(Vector2 pos, int health, float spd);

    virtual void Update(float deltaTime, Vector2 playerPos) = 0;
    virtual void Draw() const = 0;

    virtual void Shoot() = 0;

    void TakeDamage(int damage);
    bool IsAlive() const;

    Vector2 GetPosition() const;
};