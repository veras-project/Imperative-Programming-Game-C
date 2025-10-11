#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Teste Simples");
    Font god_of_war = LoadFont("GODOFWAR.TTF");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTextEx(god_of_war, "Jogar", (Vector2){800*0.075, 450*0.25}, 800 * 450 * 0.00007,2.0f, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}