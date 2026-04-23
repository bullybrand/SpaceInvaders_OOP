#include "raylib.h"
#include "enemy.h"
#include "player.h"

int main()
{

   const int swidth = 1400;
   const int sheight = 1000;

   InitWindow(swidth, sheight, "Space Invaders Prototype");
   SetTargetFPS(60);

   Player player(swidth, sheight);

   Enemy enemy({500, 100}, 1, 4.0f); // position, hp, speed
   while (!WindowShouldClose())
   {
      player.update();
      enemy.Update();
      BeginDrawing();
      ClearBackground(BLUE);

      player.draw();
      enemy.Draw();
      EndDrawing();
   }

   CloseWindow();
   std::cout<<"testing done";
}