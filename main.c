#include "main.h"

typedef enum GameScreen {LOGO = 0, TITLE, GAMEPLAY, ENDING} GameScreen;

struct projetil
{
    int dir;
    int velocidade;
};


int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "The Bending of Avatar");

    Font default_font = LoadFontEx("upheavtt.ttf", FONT_SIZE, NULL, 256);

    GameScreen current_screen = LOGO;

    SetTargetFPS(60);   

    while (!WindowShouldClose())
    {

        switch (current_screen)
        {
        case LOGO:
            logo(default_font);

            current_screen = TITLE;

            break;
        
        case TITLE:
            title(default_font);

            break;
        }

    }

    CloseWindow();

    return 0;
}