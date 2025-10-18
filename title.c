#include "main.h"

void title(Font default_font, Texture2D default_image)
{

    float scale = ((float) SCREEN_WIDTH)/((float) default_image.width);

    int option_selection = 0;

    while (WindowShouldClose() == 0)
    {
        BeginDrawing();

            DrawTextureEx(default_image, (Vector2) {0, 0}, 0, scale, GRAY);

            DrawTextEx(default_font, "Selecione uma opção", (Vector2) {SCREEN_WIDTH*0.02, SCREEN_HEIGHT*0.02}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.000075, 2.0f, RAYWHITE);

            DrawTextEx(default_font, "Jogar", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.25}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(default_font, "Créditos", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.40}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(default_font, "Opções", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.55}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(default_font, "Sair", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.70}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);

            if (IsKeyPressed(KEY_DOWN))
            {
                option_selection ++;
                option_selection = option_selection % 4;

            }

            else if (IsKeyPressed(KEY_UP))
            {
                option_selection --;
            
                if (option_selection < 0)
                {
                    option_selection = 3;
                
                }
            
            }

            else if (IsKeyPressed(KEY_SPACE) || IsKeyPressed(KEY_ENTER))
            {
                switch (option_selection)
                {
                case 0: // Play button
                    break;

                case 1: // Credits
                    credits(default_font, default_image);
                    break;

                case 2: // Options
                    break;

                case 3: // Quit
                    CloseWindow();
                    break;
                
                }    
            }

            switch (option_selection)
            {
            case 0:
                DrawTextEx(default_font, "Jogar", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.25}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);

                break;

            case 1:
                DrawTextEx(default_font, "Créditos", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.40}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);
                
                break;

            case 2:
                DrawTextEx(default_font, "Opções", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.55}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);

                break;

            case 3:
                DrawTextEx(default_font, "Sair", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.70}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);
    
                break;

            }

            ClearBackground(BLACK);

        
        EndDrawing();

    }

}