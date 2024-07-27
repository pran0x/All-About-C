#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, int> mp;
    //Insert to multimap;
    mp.insert({2,10});
    mp.insert({1,20});
    mp.insert({3,30});
    mp.insert({4,50});
    mp.insert({1,40});
    //Display the value of multimap;
        //using find func to determine the starting value;
    for(auto itr = mp.find(1); itr != mp.end(); itr++){
        cout<<itr->first<<" : "; //print out the key;
        cout<<itr->second<<endl; // print ut the data part;
    }
     auto x = mp.find(2); // starting point;
     auto y = mp.find(4); // ending point -1;
    //Erase the multimap value and key;
        // mp.erase(2);
        // mp.erase(1);
    mp.erase(x,y); // erase element from the range of x to y;
        //using begin to start the loop from the begin of the multimap;
    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        cout<<itr->first<<" : "<<itr->second<<endl;
    }
return 0; 
}
/* 
Members of Multimap;
1.Constructors;  
2.Typedefs;
3.Members Functions;
4. Operators;
*/



