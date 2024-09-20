/* 
Problem set : https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,q;
cin>>n;
  vector <int> vec;
while(n--){
  int x;
  cin>>x;
  vec.push_back(x);
}
int x,ans = 0,found = false;
cin>>q;
while (q--){
  cin>>x;
  auto it = lower_bound(vec.begin(),vec.end(),x);
  if((*it) == x){
    cout<<"Yes "<<(it-vec.begin())+1<<endl;
  }
  else cout<<"No "<<(it-vec.begin())+1<<endl;
}
return 0;
}