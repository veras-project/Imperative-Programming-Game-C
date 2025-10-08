/*******************************************************************************************
*
*   raylib [core] example - basic screen manager
*
*   Example complexity rating: [★☆☆☆] 1/4
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2025 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    Font god_of_war = LoadFont("GODOFWAR.TTF");
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1800;
    const int screenHeight = 900;

    const Vector2 

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    int option_selection = 0;

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();
        
            ClearBackground(BLACK);

            DrawTextEx(god_of_war, "Selecione uma opção", {screenWidth*0.02, screenHeight*0.02}, screenHeight * screenWidth * 0.000075, 2.0f, RAYWHITE);

            DrawTextEx(god_of_war, "Jogar", {screenWidth*0.075, screenHeight*0.25}, screenHeight * screenWidth * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(god_of_war, "Créditos", {screenWidth*0.075, screenHeight*0.40}, screenHeight * screenWidth * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(god_of_war, "Opções", {screenWidth*0.075, screenHeight*0.55}, screenHeight * screenWidth * 0.00007,2.0f, RAYWHITE);
            DrawTextEx(god_of_war, "Sair", {screenWidth*0.075, screenHeight*0.70}, screenHeight * screenWidth * 0.00007,2.0f, RAYWHITE);

            if (IsKeyPressed(KEY_DOWN))
            {
                option_selection ++;
            }

            else if (IsKeyPressed(KEY_UP))
            {
                option_selection --;
            }

            else if (IsKeyPressed(KEY_SPACE) || IsKeyPressed(KEY_ENTER))
            {
                switch (option_selection)
                {
                case 0:
                    break;

                case 1:
                    break;

                case 2:
                    break;

                case 3:
                    CloseWindow();
                    break;
                
                }    
            }

            if (option_selection < 0)
            {
                option_selection = 3;
            }

            option_selection = option_selection % 4;

            switch (option_selection)
            {
            case 0:
                DrawTextEx(god_of_war, "Jogar", {screenWidth*0.075, screenHeight*0.25}, screenHeight * screenWidth * 0.00007, 2.0f, MAGENTA);

                break;

            case 1:
                DrawTextEx(god_of_war, "Créditos", {screenWidth*0.075, screenHeight*0.40}, screenHeight * screenWidth * 0.00007, 2.0f, MAGENTA);
                
                break;

            case 2:
                DrawTextEx(god_of_war, "Opções", {screenWidth*0.075, screenHeight*0.55}, screenHeight * screenWidth * 0.00007, 2.0f, MAGENTA);

                break;

            case 3:
                DrawTextEx(god_of_war, "Sair", {screenWidth*0.075, screenHeight*0.70}, screenHeight * screenWidth * 0.00007, 2.0f, MAGENTA);
    
                break;

            }

        EndDrawing();

    }

    return 0;
}