//problem link : https://leetcode.com/problems/powx-n/description/
#include<bits/stdc++.h>
using namespace std;
int main(){
long BinNum = -2; // power of x;
double base = 3; // x^n; here x = base, n =BinNum;
double ans = 1;
//adding some extra line for unsigned number;
  if( BinNum < 0 ){
      base = 1/base;
      BinNum = -BinNum;
  }
//This code will run for signed number; 
while( BinNum > 0){
  if(BinNum % 2 == 1){ // Checking the last digit of modulation is 0 or 1;
    ans *= base; // ans  = ans * base;
  }
  base *= base; // base = base * base;
  BinNum /= 2 ; // bin = bin / 2;
}
cout<<"power of n is : "<<ans<<endl;
return 0;
}