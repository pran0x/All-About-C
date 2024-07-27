#include<bits/stdc++.h>
using namespace std;

// class A{
//     public:
//         ~A(){//destructor sign ~;
//             cout<<"Base Destructor."<<endl;
//         }
// }; 
class A{
    public:
        virtual ~A(){//destructor sign ~;
            cout<<"Base Destructor."<<endl;
        }
};

class B : public A{
    public:
        ~B(){
            cout<<"Derived class Destructor."<<endl;
        }
};

int main(){
    A *a = new B;
    delete a;
return 0;
}