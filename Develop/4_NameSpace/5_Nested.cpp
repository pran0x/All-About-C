#include<bits/stdc++.h>
using namespace std;


namespace n1{
    void func(){
        cout<<"Out Side namespace function."<<endl;
    }
    namespace n2{
    void func(){
        cout<<"Inside namespace function."<<endl;
    }
}
}
using namespace n1 :: n2 ; // n2 is inside in n1;
int main(){

func();
return 0;
}


/* EXAMPLE : 

 !namespace n1{
    ?Declaration
    !namespace n2{
        ?declaration
        }
    }


 */