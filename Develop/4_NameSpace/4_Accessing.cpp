#include<bits/stdc++.h>
using namespace std;
namespace a{
    void func(){
        cout<<"NameSpace #1.\n"<<endl;
    }
}
namespace b{
    void func(){
        cout<<"NameSpace #2.\n"<<endl;
    }
}
//Same func name cannot be using as a namespace ;
using namespace b;
// using namespace a; 

int main(){
    // cout<<func()<<endl;
    func(); // By declaring  using namespace b, so every time by func declared it will call the namespace b function;
return 0;
}