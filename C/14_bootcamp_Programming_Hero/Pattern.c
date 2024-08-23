#include<stdio.h>
int main(){
int N;
   scanf("%d",&N);
   for(int i = 0 ; i < N ; i++ ){
      for(int j = 0 ; j < 2*N-1+i ; j++ ){
         printf(" #\n");
      }
      for(int k = 0 ; k < N-i ; k++ ){
         printf("---\n");
      }
      printf("\n");
   }
return 0;
}