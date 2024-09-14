#include<bits/stdc++.h>
using namespace std;
int main(){
jump: // a statement that jump one line to another line in order execution;
long pow = 1, ans = 0,dec, decStore;
cin>>dec;
decStore = dec;//store the main input value;
while(dec != 0){
  int rem = dec % 2;
  dec = dec / 2;
  ans += rem * pow;
  pow = pow * 10;
}
cout<<"Decimal : "<<decStore<<" to Binary is : "<<ans<<endl;
goto  jump; // goto the jump  statement;
return 0;
}