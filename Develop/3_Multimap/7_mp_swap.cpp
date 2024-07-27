#include<bits/stdc++.h>
using namespace std;
int main(){
multimap< int, int> mp, mp1;
mp.insert({2,50});
mp.insert({3,40});
mp.insert({5,20});

mp1.insert({2,500});
mp1.insert({3,400});
mp1.insert({5,200});

cout<<"Elements before the swap function called.\n"<<endl;
cout<<"Elements of container mp"<<endl;
for(auto itr = mp.begin(); itr != mp.end(); itr++){
    cout<<itr->first << "   "<<itr->second<<endl;
}

cout<<"\nElements of  container mp1\n"<<endl;
for(auto itr = mp1.begin(); itr != mp1.end(); itr++){
    cout<<itr->first <<"   "<<itr->second<<endl;
}
// swap function;
cout<<"Elements After the swap function called.\n"<<endl;
mp.swap(mp1); // element of mp will swap to mp1;

cout<<"Elements of container mp"<<endl;
for(auto itr = mp.begin(); itr != mp.end(); itr++){
    cout<<itr->first << "   "<<itr->second<<endl;
}

cout<<"\nElements of  container mp1\n"<<endl;
for(auto itr = mp1.begin(); itr != mp1.end(); itr++){
    cout<<itr->first <<"   "<<itr->second<<endl;
}
return 0;
}