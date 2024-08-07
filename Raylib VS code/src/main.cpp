 #include<raylib.h>
 #include "dino.hpp"
 #include "Button.hpp"
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
    // InitWindow(width,height,"Game Collision v1.0");
    // SetTargetFPS(60);
    // Dino dino;
    // Rectangle obstacle =  Rectangle{500,100,100,100};//x,y,w,h
    // while(WindowShouldClose() == false){
    //     dino.update();
    //     bool isCollision = CheckCollisionRecs(dino.GetRect(),obstacle);
    //     BeginDrawing();
    //     ClearBackground(WHITE);
    //     DrawRectangleLinesEx(obstacle,5,BLACK);
    //     dino.Draw();
    //     dino.DrawHitBox(isCollision);
    //     EndDrawing();
    // }
    // CloseWindow();
    //!Windows Buttons;
    InitWindow(800,480,"Game Buttons v1.2");//Main Window;
    SetTargetFPS(60);//Set maximum Window;
    Texture2D BG = LoadTexture("bin/BG.png");
    Button startButton{"bin/start.png",{50,100},0.65};
    // LoadRenderTexture
    while(WindowShouldClose() == false){
        BeginDrawing();//Starting Texture From Here;
        ClearBackground(BLACK);//Rendering every frame into Black Colour;
        DrawTexture(BG,0,0,WHITE);//Draw this BG texture in here;
        startButton.Draw();
        EndDrawing();//End Textures;
    }
    CloseWindow();//Window Close;
    return 0;
}