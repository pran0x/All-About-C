#include<bits/stdc++.h>
using namespace std;
int main(){
multimap< int, int> mp;
mp.insert({2,550});
mp.insert({3,440});
mp.insert({5,20});
mp.insert({5,80});
mp.insert({3,60});
mp.insert({4,30});
mp.insert({1,40});
mp.insert({0,70});
// size determine the total key's of a multimap ;
cout<<"Multimap mp has "<<mp.size()<<" no of elements."<<endl;
return 0;
}