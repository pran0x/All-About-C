 #include<raylib.h>
 #include "dino.hpp"
#define width 720
#define height 480

 int main(){
    //!Simple Game Loop;
    // int ballx = 400;
    // int bally = 400;
    // Color green = {20,160,133,255};
    // InitWindow(800,600,"My First Raylib Game v0.0");
    // SetTargetFPS(60);
    // //Gameloop;
    // while(WindowShouldClose() == false){
    //     //1.Event handling
    //         if(IsKeyDown(KEY_RIGHT)){
    //             ballx += 3;
    //         }
    //         else if(IsKeyDown(KEY_LEFT)){
    //             ballx -= 3;
    //         }
    //         else if(IsKeyDown(KEY_UP)){
    //             bally -=3;
    //         }
    //         else if(IsKeyDown(KEY_DOWN)){
    //             bally += 3;
    //         }
    //     //2.Updating position
        
    //     //3.Drawing. 
    //     BeginDrawing();
    //     ClearBackground(green);
    //     DrawCircle(ballx,bally,20,WHITE);
    //     EndDrawing();
    // }
    // CloseWindow(); 
    //!Game Collision;
    InitWindow(width,height,"Game Collision v1.0");
    SetTargetFPS(60);
    Dino dino;
    Rectangle obstacle =  Rectangle{500,100,100,100};//x,y,w,h
    while(WindowShouldClose() == false){
        dino.update();
        bool isCollision = CheckCollisionRecs(dino.GetRect(),obstacle);
        BeginDrawing();
        ClearBackground(WHITE);
        DrawRectangleLinesEx(obstacle,5,BLACK);
        dino.Draw();
        dino.DrawHitBox(isCollision);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}