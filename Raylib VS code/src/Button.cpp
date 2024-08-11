#include "Button.hpp"
Button::Button(const char *imagepath, Vector2 imageposition,int b_w, int b_h){
 Image image = LoadImage(imagepath);//Image path
 ImageResize(&image,b_w, b_h);//new image source and size;
 texture = LoadTextureFromImage(image);//destination;
 UnloadImage(image);//remove from cpu and gpu acceleration.
 position = imageposition;//setting position; {x,y}
}

Button::~Button(){
UnloadTexture(texture);
}

void Button::Draw(){
 DrawTextureV(texture,position,WHITE);//path, {x,y}, Refresh BG;
}

bool Button::isPressed(Vector2 mousePos, bool mousePressed){
 Rectangle rect ={position.x,position.y,static_cast<float>(texture.width),static_cast<float>(texture.height)};//x,y to w,h coordinates;
 if(CheckCollisionPointRec(mousePos, rect) && mousePressed){
  return true;
 }
 return false;
}
