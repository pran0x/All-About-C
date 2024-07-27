#include<bits/stdc++.h>
using namespace std;
int main(){
multimap< int, int> mp,mp1;
    mp.insert({1,23});
    mp.insert({2,10});
    mp.insert({1,30});
    mp.insert({4,32});
    mp.insert({1,22});

    auto it = mp.equal_range(1);
    cout<<"Elements with the key 1: "<<endl;
    for(auto itr = it.first; itr != it.second; itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
    }

    auto itr = mp.equal_range(2);
    cout<<"Elements in key 2 : "<<endl;
    for(auto it = itr.first; it != itr.second; it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }
return 0;
}