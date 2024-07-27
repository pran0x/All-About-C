#include<bits/stdc++.h>
using namespace std;
int main(){
multimap<int , int> mp;
    //multimap emplace;
    mp.emplace(2,10);
    mp.emplace(1,20);
    mp.emplace(3,30);
    mp.emplace(1,40);
    mp.emplace(4,15);
//In map all duplicates will be ignored;
    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
return 0;
}