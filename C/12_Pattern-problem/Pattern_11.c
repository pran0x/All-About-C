#include<stdio.h>
/*
    1
   21
  321
 4321
54321
*/
int main(){
   int N;
   scanf("%d",&N);
   for(int i = 1 ; i <= N ; i++){
      // For using space;
      for(int j = 1 ; j <= N-i ; j++){
         printf(" ");
      }
      // For using Numbers;
      for(int j = i ; j >= 1; j--){
         printf("%d ",j);
      }
      printf("\n");
   }
return 0;
}