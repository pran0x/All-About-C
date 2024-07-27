#include<stdio.h>
int main(){
int T,N,S,k,store;
int count = 0;
   scanf("%d",&T);
for(int j = 1 ; j <= T ; j++ ){
   scanf("%d",&N);
   int A[N];
   for(int i = 1; i<= N;  i++){
   scanf("%d",&A[i]);
}

scanf("%d",&S);

for(k = 1; k <= N;  k++){
   if(A[k] == S){
      count++;
      store = k;
      break;
   }
}
if(count >= 1){
   printf("Case %d: %d\n",j,store);
}
else printf("Case %d: Not Found\n",j);
count = 0;
}
return 0;
}