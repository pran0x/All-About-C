#include<stdio.h>
/*
    1
   121
  12321
 1234321
123454321
*/
int main(){
int N;
scanf("%d",&N);
for(int i = 1 ; i <= N ; i++ ){
   //using Space;
   for(int j = 1 ; j <= N-i ; j++){
      printf(" ");
   }
   // left numbers;
   for(int k = 1 ; k <= i-1 ; k++ ){
      printf("%d",k);
   }
   // right numbers;
   for(int j = i ; j >= 1 ; j-- ){
      printf("%d",j);
   }
   printf("\n");
}
return 0;
}