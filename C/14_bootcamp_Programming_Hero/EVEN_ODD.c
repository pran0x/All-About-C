#include<stdio.h>
#include<string.h>
int main(){
   char S[1000];
   scanf("%s",&S);
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,r,s,t,u,v,w,x,y,z;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=r=s=t=u=v=w=x=y=z=0;
   int length = strlen(S);
   for(int i = 0; i < length; i++){
         if(S[i] == 'a')  a++;
         if(S[i] == 'b')  b++;
         if(S[i] == 'c')  c++;
         if(S[i] == 'd')  d++;
         if(S[i] == 'e')  e++;
         if(S[i] == 'f')  f++;
         if(S[i] == 'g')  g++;
         if(S[i] == 'h')  h++;
         if(S[i] == 'i')  i++;
         if(S[i] == 'j')  j++;
         if(S[i] == 'k')  k++;
         if(S[i] == 'l')  l++;
         if(S[i] == 'm')  m++;
         if(S[i] == 'n')  n++;
         if(S[i] == 'o')  o++;
         if(S[i] == 'p')  p++;
         if(S[i] == 'r')  r++;
         if(S[i] == 's')  s++;
         if(S[i] == 't')  t++;
         if(S[i] == 'u')  u++;
         if(S[i] == 'v')  v++;
         if(S[i] == 'w')  w++;
         if(S[i] == 'x')  x++;
         if(S[i] == 'y')  y++;
         if(S[i] == 'z')  z++;
   }
   printf("a - %d\n",a);
   printf("b - %d\n",b);
   printf("c - %d\n",c);
   printf("d - %d\n",d);
   printf("e - %d\n",e);
   printf("f - %d\n",f);
   printf("g - %d\n",g);
   printf("h - %d\n",h);
   printf("i - %d\n",i);
   printf("j - %d\n",j);
   printf("k - %d\n",k);
   printf("l - %d\n",l);
   printf("m - %d\n",m);
   printf("n - %d\n",n);
   printf("o - %d\n",o);
   printf("p - %d\n",p);
   printf("r - %d\n",r);
   printf("S - %d\n",s);
   printf("t - %d\n",t);
   printf("u - %d\n",u);
   printf("v - %d\n",v);
   printf("w - %d\n",w);
   printf("x - %d\n",x);
   printf("y - %d\n",y);
   printf("z - %d\n",z);
     return 0;
}
