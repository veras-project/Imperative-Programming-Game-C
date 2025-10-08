#include "raylib.h"
#include "raymath.h"
#include <math.h>

int main(void)
{
    const int screen_width = 1300, screen_height = 600;
    int radius = 40, speed = 1000;
    float accel = 1.f;
    InitWindow(screen_width, screen_height, "testing out the game window");

    Vector2 ball = {screen_width / 2, screen_height / 2};
    Vector2 velocity = {0, 0};

    //SetTargetFPS(60);   

    while (!WindowShouldClose())
    {
        float delta_time = GetFrameTime();

        Vector2 input_dir = Vector2Normalize((Vector2){IsKeyDown(KEY_RIGHT) - IsKeyDown(KEY_LEFT), IsKeyDown(KEY_DOWN) - IsKeyDown(KEY_UP)});
        
        Vector2 desired_vel = { input_dir.x * speed, input_dir.y * speed};
        velocity.x += (desired_vel.x -  velocity.x) * accel * delta_time;
        velocity.y += (desired_vel.y -  velocity.y) * accel * delta_time;
        
        ball.x += velocity.x * delta_time;
        ball.y += velocity.y * delta_time;

        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawCircleGradient(ball.x, ball.y, radius, MAGENTA, BLACK);
        
        EndDrawing();

    }

    CloseWindow();

    return 0;
}