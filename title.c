#include "main.h"

void title(Font font)
{
    // Definition of delta time
    const float delta_time;

    int option_selection = 0;

    while (WindowShouldClose() == 0)
    {
        BeginDrawing();
        
            ClearBackground(BLACK);

            DrawTextEx(font, "Selecione uma opção", (Vector2) {SCREEN_WIDTH*0.02, SCREEN_HEIGHT*0.02}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.000075, 2.0f, RAYWHITE);

            DrawTextEx(font, "Jogar", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.25}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(font, "Créditos", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.40}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(font, "Opções", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.55}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(font, "Sair", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.70}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007,2.0f, RAYWHITE);

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
                    credits(font);
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
                DrawTextEx(font, "Jogar", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.25}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);

                break;

            case 1:
                DrawTextEx(font, "Créditos", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.40}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);
                
                break;

            case 2:
                DrawTextEx(font, "Opções", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.55}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);

                break;

            case 3:
                DrawTextEx(font, "Sair", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.70}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);
    
                break;

            }
            switch (option_selection)
            {
            case 0:
                DrawTextEx(font, "Jogar", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.25}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);

                break;

            case 1:
                DrawTextEx(font, "Créditos", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.40}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);
                
                break;

            case 2:
                DrawTextEx(font, "Opções", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.55}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);

                break;

            case 3:
                DrawTextEx(font, "Sair", (Vector2) {SCREEN_WIDTH*0.075, SCREEN_HEIGHT*0.70}, SCREEN_HEIGHT * SCREEN_WIDTH * 0.00007, 2.0f, MAGENTA);
    
                break;

            }

        
        EndDrawing();

    }

}