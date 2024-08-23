#include "dino.hpp"

Dino::Dino(){
  Image = LoadTexture("res/gfx/dino.png");
  position.x = 20;
  position.y = 20;
  speed = 10;
}

Dino::~Dino(){
  UnloadTexture(Image);
}

void Dino::Draw(){
 DrawTextureV(Image,position, WHITE);
}

void Dino::update(){
 if(IsKeyDown(KEY_RIGHT)){
  position.x += speed;
 }
 if(IsKeyDown(KEY_LEFT)){
  position.x -= speed;
 }
 if(IsKeyDown(KEY_UP)){
  position.y -= speed;
 }
 if(IsKeyDown(KEY_DOWN)){
  position.y += speed;
 }
}

Rectangle Dino::GetRect()
{

 return Rectangle{position.x, position.y,float(Image.width),float(Image.height)};
}

void Dino::DrawHitBox(bool IsCollision){
  // Color outlineColor = IsCollision ? RED : BLACK;
  // DrawRectangleLinesEx(GetRect(), 3, outlineColor);
  if(IsCollision){
   DrawRectangleLinesEx(GetRect(),3, RED);
  }
}
