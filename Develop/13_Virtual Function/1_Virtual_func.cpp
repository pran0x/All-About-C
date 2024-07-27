#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        // void display(){
        virtual void display(){ //base class can be reference into derive class;
            cout<<"This is base Class."<<endl;
        }
};
class B : public A{
    public:
        void display(){
            cout<<"This is derive class."<<endl;
        }
};
int main(){
    A *a;// pointing to class A;
    B b;
    a = &b; // addressing b to a through pointer;
    //pointer only access the base class; not the derive class;
    a->display(); //displaying output;
    //if class A makes virtual function then it will run derive class;
return 0;
}