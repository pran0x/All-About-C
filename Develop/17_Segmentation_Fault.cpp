#include<bits/stdc++.h>
using namespace std;
int main(){
    //Correct init;
int i = 10;
int *ipt = &i;
int *i1 = new(ipt) int (9);
cout<<ipt<<endl;

//Incorrect init;
int *ip;
int *i2 = new(ip)int (4);
cout<<ip<<endl;

//  correct Method;
void *vd = &i;
int *i3 = new(vd)int(12);
cout<<vd<<endl;

//Incorrect Method;
/* int a;
int *i5 = new(a) int (23);
cout<<a<<endl;
 */
return 0;
}