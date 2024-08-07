#pragma once
#include<raylib.h>
class Button
{
private:
 Texture2D texture;

public:
 Button(const char* imagepath,Vector2 imageposition, float scale);
 ~Button();
 void Draw();
 Vector2 position;
};
