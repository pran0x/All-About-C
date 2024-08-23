#include<stdio.h>
int main (){
   int N, n= 6;
   scanf("%d",&N);
   for(int i = 0 ; i < n ; i++){
      for(int j = 0; j <  2*n ;  j++){
         if (j >= n-i && j<= n+i){
            printf("*");
         }
         else printf(" ");
      
      }   
      printf("\n");
   }
   for(int i = 0 ; i < n-1 ; i++){
       for(int j = 0; j < n;  j++){
          if (j >= n-i){
            printf("*");
         }
         else printf(" ");
      
      }   
      printf("\n");
   }
   return 0;
}