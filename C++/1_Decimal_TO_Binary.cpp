#include<bits/stdc++.h>
using namespace std;
int BinaryToDecimal(long BinNum);
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
cout<<"Binary to  : "<<ans<<" to Decimal is : "<<BinaryToDecimal(ans)<<endl;
goto  jump; // goto the jump  statement;
return 0;
}
int BinaryToDecimal(long BinNum){
  long BinNumStore = BinNum, ans = 0, pow = 1;
  while ( BinNumStore > 0){ // ex = 2; bin = 10; 
    int rem = BinNumStore % 10; // 10%10 = 0; /// 1 % 10  = 0.1 here 1 is reminder; 
    // cout<<"REM : "<<rem<<endl; ////uncomment to see the progress;
    ans += rem * pow; // 0 = 0 + 0*1 = 0;  /// 0 = 0 + 1  * 2 = 2;
    // cout<<"ANS : "<<ans<<endl;////uncomment to see the progress;
    BinNumStore = BinNumStore / 10; //10 /10 = 1; /// 1/10 = 0.1 here 0 is divide, loop terminated! 
    // cout<<"BinNumStore : "<<BinNumStore<<endl;////uncomment to see the progress;
    pow = pow * 2; // 1 = 1 * 2;
  } 
  return ans;
}