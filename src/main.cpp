#include "raylib.h"
#include "resource_dir.h"

int main()
{
    SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
    InitWindow(800, 600, "Epic");
    SearchAndSetResourceDir("resources");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("TODO: Drone simulation",  200, 200, 40, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
