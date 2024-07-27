#include<bits/stdc++.h>
using namespace std;
//RTTI - Run Time Type Information;
class A{
    //let's make a void function;//unless it shows (source type is not polymorphic).
    virtual void function(){

    };
};
class B : public A{

};
int main(){
    A *a = new B;
    B *b = dynamic_cast<B*>(a);
    if( b != NULL){
        cout<<"It is Working."<<endl;
    }
    else{
        cout<<"Upcasting Base derive cannnot be done."<<endl;
    }
return 0;
}