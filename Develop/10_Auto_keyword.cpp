#include<bits/stdc++.h>
using namespace std;
int main(){
    auto x = 1;
    auto y = 2;
    auto ptr = &x;
    //Short name of Data types;
    //  int = i, ptr = pi , double = d;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(ptr).name()<<endl;

    auto z = 1.20;
    cout<<typeid(z).name()<<endl;


    set<string>a;
    a.insert({"PRANTO","KUMAR","SHIL"});
    for(auto b = a.begin(); b != a.end(); b++){
        cout<<*b<<endl;
    } // Result will be Kumar , pranto, shil
return 0;
}