#include "raylib.h"

int main() {
    InitWindow(800, 450, "Raylib Working");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("It works!", 300, 200, 20, DARKBLUE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}