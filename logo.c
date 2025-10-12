#include "main.h"

void logo (Font font){

    while (!IsKeyPressed(KEY_ENTER) && !IsKeyPressed(KEY_SPACE) && !WindowShouldClose())
    {

        BeginDrawing();

            ClearBackground(BLACK);
            DrawTextEx(font, "The Bending of Avatar", (Vector2) {(SCREEN_WIDTH - MeasureTextEx(font, "The Bending of Avatar", FONT_SIZE + 10, 2).x) / 2, (SCREEN_HEIGHT - MeasureTextEx(font, "The Bending of Avatar", FONT_SIZE + 10, 2).y) / 2}, FONT_SIZE + 10, 2, WHITE);
            DrawTextEx(font, "Pressione espaço ou enter para continuar", (Vector2) {(SCREEN_WIDTH - MeasureTextEx(font, "Pressione espaço ou enter para continuar", FONT_SIZE, 2).x) / 2, (SCREEN_HEIGHT - MeasureTextEx(font, "Pressione espaço ou enter para continuar", FONT_SIZE, 2).y) / 2 + FONT_SIZE}, FONT_SIZE, 2, WHITE);

        EndDrawing();

    }

    if (WindowShouldClose())
    {
        CloseWindow();
    }

}