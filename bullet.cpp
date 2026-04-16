#include "Bullet.h"

Bullet::Bullet(Vector2 pos, Vector2 dir, float spd, int dmg, BulletType t)
{
    position = pos;
    velocity = Vector2Normalize(dir);
    velocity = Vector2Scale(velocity, spd);

    speed = spd;
    damage = dmg;
    type = t;
    active = true;
}

void Bullet::Update()
{
    position.x += velocity.x;
    position.y += velocity.y;

    if (position.x < 0 || position.x > 1400 ||
        position.y < 0 || position.y > 1000)
    {
        active = false;
    }
}

void Bullet::Draw() const
{
    if (!active) return;

    if (type == PLAYER)
        DrawCircleV(position, 4, BLUE);
    else
        DrawCircleV(position, 4, RED);
}

bool Bullet::IsActive() const
{
    return active;
}

void Bullet::Deactivate()
{
    active = false;
}

Vector2 Bullet::GetPosition() const
{
    return position;
}