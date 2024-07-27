#include<stdio.h>
#include<math.h>
int main(){
   double T,X,D1,D2;
   scanf("%lf",&T);
for(int i = 0 ; i < T ; i++ ){
   scanf("%lf %lf %lf",&X, &D1, &D2);
   double ans = ((X*D1)/D2);
   int result = ceilf(ans);
   printf("%d\n",result);
}
return 0;
}