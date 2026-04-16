#include "raylib.h"
#include "player.h"

int main(){
    InitWindow(1800,1600,"space thing");

    Player player;

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        player.update();

        BeginDrawing();
        ClearBackground(BLACK);

        player.draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}