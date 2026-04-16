#pragma once
#include "raylib.h"

enum class EnemyState // a synonym for all the following words, because they are all the same type of thing: a state
{
    ALIVE,
    DEAD
};
// for a very simple enemy, they don't need to have a different state for attacking as they have no extra animations

class Enemy
{
protected:
    Vector2 position; // show that the enemy has x and y values
    int hp;           // should be equal to player's bullet damage if you want the simpler enemies to be one-shot easy
    float speed;      // rate of change in x and y values, in our case for simple enemies the must simply move downwards on the screen
    EnemyState state  ; // as desrcibed above in the enum class
    Texture2D simple_enemy ;

public:
    // constructor
    Enemy(Vector2 pos, int health, float spd);

    // make enemies move straight down
    virtual void Update() ;
    virtual void Draw() const ;

    //virtual void Shoot(); // create bullets and make them move away from enemy, towards player

    // no excessive animaion for now, simply stop drawing enemy
    void TakeDamage(int damage);
    // simply test state
    bool IsAlive() const;

    // return position
    Vector2 GetPosition() const;
};