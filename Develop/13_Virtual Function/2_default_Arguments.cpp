#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        virtual void s(int a = 0){
            cout<<"This is the base class.n"<<endl;
        }
};
class B : public A{
    public:
        virtual void s(int a = 2){
            cout<<"This is the derive class and the value of a is : "<<a<<endl;
        }
};
int main(){
    B b;
    A *a;//pointing to object a;
    a = &b;
    a->s();//default arguments;
    a->s(50);//all by reference;
return 0;
}