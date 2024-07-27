#include<bits/stdc++.h>
using namespace std;

int a(){
    return 2;
}

char b(){
    return'g';
}

int main(){
    decltype(a()) x;//decltype - > declaration type;
    decltype(b()) y;
    cout<<typeid(x).name()<<endl;//showing i as short of int;
    cout<<typeid(y).name()<<endl;//showing c as short of char;


    int z = 2;
    decltype(z) a = z + 2; //reference towards type id;
    cout<<typeid(a).name()<<endl;
return 0;
}