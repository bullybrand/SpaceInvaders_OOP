#include "enemy.h"
#include "bullet.h"
#include <vector>
#include <iostream>
using namespace std;
// constructor
Enemy::Enemy(Vector2 pos, int health, float spd) : position(pos), hp(health), speed(spd), state(EnemyState::ALIVE)
{
    simple_enemy = LoadTexture("assets/enemy_simple.png");
    if (simple_enemy.id == 0)
    {
        cout << "Failed to load enemy texture!" << endl;
    }
}

void Enemy::Draw() const { DrawTextureEx(simple_enemy, position, 0.0f, 0.5f, WHITE); }
void Enemy::Update()
{
    position.x += speed; // bcz our enemies (smallest scale) only move down the screen rather than left, right, upwards
    if (position.x <= 0 || position.x + 250 >= 1400)
    {
        speed *= -1;
    }
}

void Enemy::TakeDamage(int damage)
{
    // hp -= damage;
    // if (hp <= 0)
    state = EnemyState::DEAD; // the simpler enemies are just one-shot easy
}

bool Enemy::IsAlive() const
{
    return (state == EnemyState::ALIVE);
}

Vector2 Enemy::GetPosition() const // coordinates
{
    return position;
}
