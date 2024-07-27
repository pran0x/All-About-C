#include<stdio.h>
/*
1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 
*/
int main(){
   int N;
   scanf("%d",&N);
   for(int i = 1 ; i <= N ; i++){
      for(int j = 1 ; j <= i; j++){
         int k = i*j;
         printf("%d ",k);
      }
      printf("\n");
   }
return 0;
}