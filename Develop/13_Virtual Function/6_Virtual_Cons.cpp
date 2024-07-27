#include<bits/stdc++.h>
using namespace std;
class A{
    virtual A(){
        cout<<"Base Class."<<endl;
    }
};
class B : public A{
    public:
        B(){
            cout<<"Derived Class."<<endl;
        }
};
int main(){
    A a;// this throw error;
    //virtual func can not be constructed;
return 0;
}