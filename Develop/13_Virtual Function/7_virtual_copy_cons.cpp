#include<bits/stdc++.h>
using namespace std;


 class A{
    virtual ~A(){

    }
    virtual void a() = 0;//pure virtual function;
    virtual void b() = 0;
    virtual A* clone() const = 0;
    virtual A* create() const = 0;
};

class B : public A{
public:
    B* clone() const;
    B* create() const;
};
B* B :: clone() const{ return new B(*this)};
B B :: create() const{ return new B()};
int main(){

return 0;
}