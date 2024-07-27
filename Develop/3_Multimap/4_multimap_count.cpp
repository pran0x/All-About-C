#include<bits/stdc++.h>

using namespace std;
int main(){
multimap<int , int > mp;
mp.insert({1,30});
mp.insert({2,60});
mp.insert({4,50});
mp.insert({3,40});
mp.insert({2,660});
mp.insert({1,350});
mp.insert({2,630});
mp.insert({4,560});
mp.insert({3,440});
mp.insert({2,650});
mp.insert({1,3340});
mp.insert({2,605});
mp.insert({4,520});
mp.insert({3,460});
mp.insert({2,650});
// count FUNCTION   is to found the key of multimap; 
cout<<"1 exists "<<mp.count(1)<<" times"<<endl;
cout<<"2 exists "<<mp.count(2)<<" times"<<endl;
cout<<"3 exists "<<mp.count(3)<<" times"<<endl;
cout<<"4 exists "<<mp.count(4)<<" times"<<endl;
return 0;
}