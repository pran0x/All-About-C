#include<bits/stdc++.h>
using namespace std;
int main(){
map<int, int> mp; // it will ignore all the duplicates;
//map emplace hint;
    mp.emplace_hint(mp.begin(), 5, 10);
    mp.emplace_hint(mp.begin(), 1, 20);
    mp.emplace_hint(mp.begin(), 5, 30);
    mp.emplace_hint(mp.begin(), 1, 40);
    mp.emplace_hint(mp.begin(), 1, 60);
    cout<<endl<<endl;
    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
    }

multimap<int, int> mmp; // it will  not ignore all the duplicates;
//multimap emplace hint;
    mmp.emplace_hint(mmp.begin(), 5, 10);
    mmp.emplace_hint(mmp.begin(), 1, 20);
    mmp.emplace_hint(mmp.begin(), 5, 30);
    mmp.emplace_hint(mmp.begin(), 1, 40);
    mmp.emplace_hint(mmp.begin(), 1, 60);
    cout<<endl<<endl;
    for(auto itr = mmp.begin(); itr != mmp.end(); itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
return 0;
}