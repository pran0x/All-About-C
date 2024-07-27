#include<stdio.h>
int main(){
int N,max,min;
scanf("%d",&N);
int A[N];
for(int k = 0; k < N; k++){
   scanf("%d",&A[k]);
}
int max_A = A[0]; 
int min_A = A[0]; 
      for (int i = 0; i < N; i++)
      {
      if ( max_A < A[i] )
      {
       max_A = A[i];
      }
      if (min_A > A[i] )
      {
       min_A = A[i];
      }
     }
for (int i = 0; i < N; i++){
   printf("%d ",max_A-A[i]);
}
return 0;
}