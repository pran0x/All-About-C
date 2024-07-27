#include<stdio.h>
/*
    1
   121
  12321
 1234321
123454321
123454321
 1234321
  12321
   121
    1
*/
int main(){
int N;
scanf("%d",&N);
//Upper code;
   for(int i = 1; i <= N; i++){
      for(int j = 1; j <= N-i; j++){
         printf(" ");
      }
      for(int j = 1 ; j <= i-1; j++){
         printf("%d",j);
      }
      for(int j = i ; j >= 1 ; j--){
         printf("%d",j);
      }
   printf("\n");
   }

   //Lower code;
    for(int i = N; i >= 1; i--){
      for(int j = N-i; j >= 1; j--){
         printf(" ");
      }
      for(int j = 1 ; j <= i-1; j++){
         printf("%d",j);
      }
      for(int j = i ; j >= 1 ; j--){
         printf("%d",j);
      }
   printf("\n");
   }
return 0;
}