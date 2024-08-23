#include<stdio.h>
int main (){
   int N,K;
   scanf("%d",&N);
   scanf("%d",&K);
   for(int i= 1; i <= K; i++){
      for(int j = 1; j <= N; j++){
         printf("%d ",j);
      }
      printf("\n");
   }
   return 0;
}