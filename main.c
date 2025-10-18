#include "main.h"

typedef enum GameScreen {LOGO = 0, TITLE, GAMEPLAY, ENDING} GameScreen;

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "The Bending of Aang");

    Font default_font = LoadFontEx("upheavtt.ttf", FONT_SIZE, NULL, 256);
    
    Image background_image = LoadImage("the_bending_of_aang_logo.jpeg");

    Texture background_texture = LoadTextureFromImage(background_image);

    GameScreen current_screen = LOGO;

    SetTargetFPS(60);   

    while (!WindowShouldClose())
    {

        switch (current_screen)
        {
        case LOGO:
            logo(default_font, background_texture);

            current_screen = TITLE;

            break;
        
        case TITLE:
            title(default_font, background_texture);

            break;
        }

    }

    CloseWindow();

    return 0;
}