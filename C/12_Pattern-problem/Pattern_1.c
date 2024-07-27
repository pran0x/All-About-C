
#include<stdio.h>
int main(){
   int N;
   scanf("%d",&N);
   // Forward Patter printing number;
   for(int i = 1; i <= N; i++){
      for(int j = 1; j <= i ; j++){
         printf("%d ", j);
      }
      printf("\n"); 
   }
   printf("\n\n");
   // Reverse Patter printing numbers;
   for(int i = 1 ; i <= N ; i++ ){
      for(int j = N ; j >= i ; j-- ){
      printf("%d ",j);
      }
      printf("\n");
   }
return 0;
}