#include<stdio.h>
/*
A 
A B 
A B C 
A B C D 
A B C D E */
int main(){
   int N;
   scanf("%d",&N);
   for(int i = 1 ; i <= N ; i++ ){
      for(int j = 1 ; j <= i ; j++){
      printf("%c ",j+64);
      }
      printf("\n");
   }
return 0;
}