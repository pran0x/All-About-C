#include<stdio.h>
/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/
int main(){
   int N;
   scanf("%d",&N);
   for(int i = 1 ; i <= N ; i++ ){
      for(int j = 1 ; j <= i ; j++ ){
         printf("%d ",i);
      }
      printf("\n");
   }
   for(int i = N-1 ; i >= 1 ; i-- ){
      for(int j = 1 ; j <= i ; j++ ){
         printf("%d ",i);
      }
      printf("\n");
   }
return 0;
}