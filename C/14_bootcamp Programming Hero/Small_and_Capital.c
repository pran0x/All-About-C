#include<stdio.h>
#include<string.h>
int main(){
   char s[1000];
   int capital=0,small=0,length;
   scanf("%s",&s);
   length = strlen(s);
   for(int i = 0; i < length ; i++){
      for (char j = 'A' ; j <= 'Z' ; j++){
         if(s[i] == j){
         capital++;
         }
      }
      for (char k = 'a' ; k <= 'z' ; k++){
         if(s[i] == k){
         small++;
      }
   }
}
printf("%d %d",capital,small);
   return 0;
   }