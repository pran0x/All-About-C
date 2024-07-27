#include<stdio.h>
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
int main(){
int N,count = 0 ;
scanf("%d",&N);
   for(int i = 1 ; i <= N ; i++ ){
         for(int j = 1 ; j <= i ; j++ ){
            printf("%d ",++count);
         }
         printf("\n");
   }
return 0;
}