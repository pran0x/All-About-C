#include<stdio.h>
/*
A 
B B 
C C C 
D D D D 
E E E E E */
int main(){
   int N;
   scanf("%d",&N);
   for(int i = 1 ; i <= N ; i++ ){
      for(int j = 1 ; j <= i ; j++){
      printf("%c ",i+64); //Ascii values;
      }
      printf("\n");
   }
return 0;
}