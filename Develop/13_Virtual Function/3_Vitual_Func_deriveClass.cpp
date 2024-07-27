#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        virtual void s(){
            cout<<"We are in function of base class."<<endl;
        }
};
class B : public A{
    public:
        void s(){
            cout<<"We are in the function s of the derive class"<<endl;
        }
        void virtual sa(){
            cout<<"We are in the function sa of the derive class."<<endl;
        }
};
class C : public B{
    public:
        void s(){
            cout<<"We are in the function of class C."<<endl;
        }
};

int main(){
    A *a1, *a2;
    A a3;
    B b;
    a1 = &a3;
    a2 = &b;
    a1->s();
    a2->s();
    /// a2->sa(); //not a member of Class A;
    C c;
    B *bb = &c;
    bb->s();
return 0;
}