#include<bits/stdc++.h>
using namespace std;
namespace s1{
    namespace s2{
        namespace s3{
            namespace s4{
                void func(){
                    cout<<"Inside the fourth namespace."<<endl;
                }
                int x = 10;
                int y = 20;
                int z = 30;
            }
        }
    }
}

namespace alias = s1::s2::s3::s4; // shortcut to define those;

int main(){
    //Every time need to use this again again when ever it used;
    alias::func();
    cout<<alias::x<<endl;
    cout<<alias::y<<endl;
    cout<<alias::z<<endl;
return 0;
}