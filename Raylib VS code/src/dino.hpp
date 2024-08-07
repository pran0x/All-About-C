#pragma once
#include<raylib.h>
class Dino{
public:
 Dino();
 ~Dino();
 void Draw();
 void update();
 Rectangle  GetRect();
 void DrawHitBox(bool IsCollision);
private:
 Texture2D Image;
 Vector2 position;
 int speed;
};