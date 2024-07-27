#include<stdio.h>
/*
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/
int main(){
   int N;
   scanf("%d",&N);

   for(int i = 1 ; i <= N ; i++ ){
      // Printing Space;
      for(int j = 1 ; j <= N-i ; j++ ){  //Noticeable point is [i]
         printf(" ");
      }
      // Printing stars;
      for(int j = i ; j >= 1 ; j-- ){ //Noticeable point is [j,i,1]
         printf("* ");
      }
      printf("\n");
   }
return 0;
}