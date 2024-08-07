 #include<raylib.h>


 int main(){
    int ballx = 400;
    int bally = 400;
    Color green = {20,160,133,255};
    InitWindow(800,600,"My First Raylib Game v0.0");
    SetTargetFPS(60);
    //Gameloop;
    while(WindowShouldClose() == false){
        //1.Event handling
            if(IsKeyDown(KEY_RIGHT)){
                ballx += 3;
            }
            else if(IsKeyDown(KEY_LEFT)){
                ballx -= 3;
            }
            else if(IsKeyDown(KEY_UP)){
                bally -=3;
            }
            else if(IsKeyDown(KEY_DOWN)){
                bally += 3;
            }
        //2.Updating position
        
        //3.Drawing. 
        BeginDrawing();
        ClearBackground(green);
        DrawCircle(ballx,bally,20,WHITE);
        EndDrawing();
    }
    CloseWindow(); 
    return 0;
 }