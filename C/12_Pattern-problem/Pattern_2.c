#include<stdio.h>
/*
1 2 3 4 
1 2 3 
1 2 
1 
*/
int main(){
   int N;
   scanf("%d",&N);
   for(int i = N ; i >= 1 ; i-- ){
      for(int j = 1 ; j <= i ; j++){
      printf("%d ",j);
      }
      printf("\n");
   }
return 0;
}