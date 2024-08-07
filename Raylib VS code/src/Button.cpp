#include "Button.hpp"

Button::Button(const char *imagepath, Vector2 imageposition,float scale){
 // texture = LoadTexture(imagepath);
 Image image = LoadImage(imagepath);//Image path
 // int originalwidth = image.width;//scale width
 // int originalheight = image.height;//Scale height;
 // int newwidth = static_cast<int>(originalwidth *scale);//scaling optional;
 // int newheight = static_cast<int>(originalheight *scale);//scaling optional;
 ImageResize(&image,150, 50);//new image source and sizel
 texture = LoadTextureFromImage(image);//destination;
 UnloadImage(image);//remove from cpu and gpu acceleration.
 position = imageposition;//setting position;
}

Button::~Button(){
UnloadTexture(texture);
}

void Button::Draw(){
 DrawTextureV(texture,position,WHITE);
}
