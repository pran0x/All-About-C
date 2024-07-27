#include<bits/stdc++.h>
using namespace std;
class A{
     public:
        virtual static void s(){ // A func is static, it can not be virtual at a same time;
            cout<<"...."<<endl;
        }
};
class B : public A{
    public:
        static void s(){
            cout<<",,,,,,"<<endl;
        }
}
int main(){
    A *a;
    B b;
    a = &b;
    a->s();
//This program gon a  be showed error;
return 0;
}