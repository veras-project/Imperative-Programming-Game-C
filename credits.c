#include "main.h"

void credits(Font font)
{


    int x_names = SCREEN_WIDTH * 0.1;

    EndDrawing();

    while (!IsKeyPressed(KEY_SPACE) && !IsKeyPressed(KEY_ENTER) && !IsKeyPressed(KEY_ESCAPE)){
        BeginDrawing();

            ClearBackground(BLACK);
            DrawTextEx(font, "Créditos:", (Vector2) {SCREEN_WIDTH * 0.01 , 0}, FONT_SIZE + 20, 2, WHITE);

            DrawTextEx(font, "Lucas de Moura", (Vector2) {x_names , SCREEN_HEIGHT * 0.15}, FONT_SIZE, 2, WHITE);
            DrawTextEx(font, "Pedro Henrique", (Vector2) {x_names , SCREEN_HEIGHT * 0.25}, FONT_SIZE, 2, WHITE);
            DrawTextEx(font, "Lucas David", (Vector2) {x_names , SCREEN_HEIGHT * 0.35}, FONT_SIZE, 2, WHITE);
            DrawTextEx(font, "Joyce", (Vector2) {x_names , SCREEN_HEIGHT * 0.45}, FONT_SIZE, 2, WHITE);
            DrawTextEx(font, "Guilherme Verás", (Vector2) {x_names , SCREEN_HEIGHT * 0.55}, FONT_SIZE, 2, WHITE);
        
        EndDrawing();
    
    }

    BeginDrawing();

}