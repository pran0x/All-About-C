#include<stdio.h>
#include<string.h>
int is_palindrome(char S[]);
int main(){
   char s[1000];
   scanf("%s",s);
   if (is_palindrome(s) == 1){
      printf("Palindrome");
   }
   else printf("Not Palindrome");
   return 0;
}
int is_palindrome(char S[]){
   int count= 0,length = strlen(S);
   for(int i = 0, j = length-1 ; i < length, j >= 0 ; i++, j--){
         if(S[i] == S[j]){
            count++;
         }
   }
   if (count == length){
      return 1;
   }
   else return 0;
   
}