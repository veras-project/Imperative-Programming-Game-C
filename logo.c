#include "main.h"

void logo (Font font, Texture2D default_image){

    float scale = ((float) SCREEN_WIDTH)/((float) default_image.width);

    while (!IsKeyPressed(KEY_ENTER) && !IsKeyPressed(KEY_SPACE) && !WindowShouldClose())
    {

        BeginDrawing();

            DrawTextureEx(default_image, (Vector2) {0, 0}, 0, scale, WHITE);
            
            ClearBackground(BLACK);
            DrawTextEx(font, "The Bending of Aang", (Vector2) {(SCREEN_WIDTH - MeasureTextEx(font, "The Bending of Aang", FONT_SIZE + 10, 2).x) / 2, (SCREEN_HEIGHT - MeasureTextEx(font, "The Bending of Aang", FONT_SIZE + 10, 2).y) / 2}, FONT_SIZE + 10, 2, WHITE);
            DrawTextEx(font, "Pressione espaço ou enter para continuar", (Vector2) {(SCREEN_WIDTH - MeasureTextEx(font, "Pressione espaço ou enter para continuar", FONT_SIZE, 2).x) / 2, (SCREEN_HEIGHT - MeasureTextEx(font, "Pressione espaço ou enter para continuar", FONT_SIZE, 2).y) / 2 + FONT_SIZE}, FONT_SIZE, 2, WHITE);

        EndDrawing();

    }

    if (WindowShouldClose())
    {
        CloseWindow();
    }

}