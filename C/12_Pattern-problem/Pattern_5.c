#include<stdio.h>
/*
1 
0 0 
1 1 1 
0 0 0 0 
1 1 1 1 1 */
int main(){
   int N;
   scanf("%d",&N);
   for(int i = 1 ; i <= N ; i++ ){
      for(int j = 1 ; j <= i ; j++){
      printf("%d ",i%2);
      }
      printf("\n");
   }
return 0;
}