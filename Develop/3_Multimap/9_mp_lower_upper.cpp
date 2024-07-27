#include<bits/stdc++.h>
using namespace std;
int main(){
multimap< int, int> mp,mp1;
    mp.insert({1,23});
    mp.insert({2,10});
    mp.insert({1,30});
    mp.insert({4,32});
    mp.insert({5,22});

    auto it = mp.lower_bound(3); // taken key in function;
    //lower means  for an example : 3 next digit is 4;
    cout<<"The lower bound of 3 is : "<<it->first<<"  "<<it->second<<endl;
    
    auto itr = mp.upper_bound(4); // taken key in function;
    cout<<"The upper bound of 4 is : "<<itr->first<<"  "<<itr->second<<endl;
return 0;
}