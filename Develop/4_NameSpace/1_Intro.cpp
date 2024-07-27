#include<bits/stdc++.h>
using namespace std;

namespace w{
    int x = 10; // can be declared in global variable;
}
namespace y{
    int x = 5;
}
int main(){
int x = 2;
cout<<x <<endl;
cout<<w::x<<endl;
cout<<y::x<<endl;
return 0;
}