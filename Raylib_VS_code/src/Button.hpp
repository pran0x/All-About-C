#pragma once
#include<raylib.h>
class Button
{
private:
 Texture2D texture;

public:
 Button(const char* imagepath,Vector2 imageposition,int b_w, int b_h);
 ~Button();
 void Draw();
 Vector2 position;
 bool isPressed(Vector2 mousePos,bool mousePressed);
};
