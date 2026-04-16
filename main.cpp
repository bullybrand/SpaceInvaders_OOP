#include "raylib.h"
#include "player.h"

int main(){

    const int swidth = 1400;
    const int sheight =1000;

     InitWindow(swidth, sheight, "Space Invaders Prototype"); 
     SetTargetFPS(60);

     Player player(swidth, sheight);

     while (!WindowShouldClose()){
        player.update();
        BeginDrawing();
        ClearBackground(BLACK);

        player.draw();

        EndDrawing();
     }
     
     CloseWindow();
     return 0;
}