#include<stdio.h>
int main(){
   int N,X,count=0;
   scanf("%d",&N);
   int A[N];
   for(int i = 0; i < N; i++){
      scanf("%d",&A[i]);
   }
   scanf("%d",&X);
   for(int i = 0; i < N; i++){
      if(A[i] == X){
         count++;
      }
   }
   printf("%d",count);
   return 0;
}