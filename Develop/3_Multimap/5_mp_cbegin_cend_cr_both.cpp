#include<bits/stdc++.h>
using namespace std;
int main(){
 multimap <int , int > mp;
 mp.insert({3, 40});
 mp.insert({2, 30});
 mp.insert({1, 50});
 mp.insert({2, 30});
auto itr = mp.cbegin(); // returns a constant value;
 cout<<"The first element is :"<<itr->first<<"  "<<itr->second<<endl;
for( auto ite = mp.cbegin(); ite != mp.cend(); ++ite){
    cout<<ite -> first <<" "<<ite->second<<endl;
}

auto itr2 = mp.cend(); // count the all element in multimap from the end;
 cout<<"The last element is :"<<itr2->first<<endl;

for( auto ite = mp.cbegin(); ite != mp.cend(); ++ite){
    cout<<ite -> first <<" "<<ite->second<<endl;
}

auto itr3 = mp.crbegin(); // constant reverse value;
//short the list and reverse it print the ascending to descending order;
 cout<<"The first element is :"<<itr3->first<<"  "<<itr3->second<<endl;
 for( auto ite = mp.crbegin(); ite != mp.crend(); ++ite){
    cout<<ite -> first <<" "<<ite->second<<endl;
}

cout<<endl<<endl;

auto itr4 = mp.crend();
//short the list and reverse it print the ascending to descending order;
 cout<<"The last element is :"<<itr4->first<<endl;
 for( auto ite = mp.crbegin(); ite != mp.crend(); ++ite){
    cout<<ite -> first <<" "<<ite->second<<endl;
}
return 0;
}