#include<stdio.h>
int main(){
   int N,even,odd;
   even= odd = 0;
   scanf("%d",&N);
   int A[N];
   for(int i = 0 ; i < N ; i++ ){
      scanf("%d",&A[i]);
      if(A[i] % 2 == 0){
         even++;
      }
      else {
         odd++;
      }
   }
   printf("%d %d",even,odd);   
   return 0;
}