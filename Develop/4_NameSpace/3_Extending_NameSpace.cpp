#include<bits/stdc++.h>
using namespace std;
namespace w{//Samename but different variable;
    int x = 10;
}
namespace w{
    int y = 20; //Global scope; same as global variable;
}
int main(){
    cout<<w::x<<endl;
    cout<<w::y<<endl;
return 0;
}