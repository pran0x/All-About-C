#include<bits/stdc++.h>
using namespace std;
template<class T, class U, int I>struct X {///Define the class and the structure of the parameters;
    void display(){
        cout<<"This is main Template #0"<<endl;
    }
};
template<class T, int I> struct X<T, T*, I>{// calling func will be same as define;
    void display(){
        cout<<"This is partial Template #1"<<endl;
    }
};
template <class T, class U, int I> struct X<T*, U, I>{
    void display(){
        cout<<"This is partial Template #2"<<endl;
    }
};
template< class U>  struct X<int, U*, 10>{//define others parameters
    void display(){
        cout<<"This is partial Template #3"<<endl;
    }
};
int main(){
    X<int,  int,    10> a; //same as call function template;
    X<int,  int*,   5>  b; //same as define template;
    X<int*, float,  39> c; //same as define template;
    X<int,  char*,  10> d; // same as define template;

    a.display();
    b.display();
    c.display();
    d.display();



return 0;
}