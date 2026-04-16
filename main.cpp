#include "raylib.h"
#include "player.h"

int main(){
<<<<<<< HEAD
=======
    InitWindow(1800,1600,"space thing");
>>>>>>> cfa1902fd36ac081e3189376f7c4fe5282e50a08

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