#include<bits/stdc++.h>
using namespace std;
    template<class T = float, int i = 5> //default value define;
    class A{
        public:
            A();//A default empty function; 
            int value;
};
    template<> class A<> {// declared default template without arguments;
        public:
            A();//define later;
};
    template<>class A <double, 10>{ //Default template with class parameters change;
        public:
            A();//define later;
};
    template<class T, int i> A <T, i> ::A():value(i){// constructor called;
        cout<<"Primary Template : "<<value<<endl;
}
A<>::A(){ 
    cout<<"Explict Specialization"<<" Default Argument"<<endl;
}
A<double,10>::A(){
    cout<<"Explict Specialization"<< " double, 10"<<endl;
}

int main(){
    A<char, 8> a; //default template;
    A<> b;  //No argument pass with this so default arguments;
    A<double,10> c;
    return 0;
}