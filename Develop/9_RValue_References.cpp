#include<bits/stdc++.h>
using namespace std;

void f(int& i){ // take variable as a references;
    cout<<"Rvalue Reference : "<<i<<endl;
}

void f(int&& i){ // taking value as a references;
    cout<<"Rvalue Reference : "<<i<<endl;
}





int A(){
     int x = 2;
     return x;
}




void A(const int& value){
    
    cout<<"Lvalue : "<<value<<endl;
}
void A(int&& value){
    cout<<"Rvalue"<<value<<endl;
}
int B(){
    int temp_val = 20;
    return temp_val;
}
int main(){
    // int&& ref = 99;
    // int& ref = 99; // this part will show error;
    
    int x = 10;
    int& ref = x;// now it's correct;
    int i = 10;
    f(i); //function &i;
    //function &&i;
    f(100); // could not work on &i.
    f(move(i)); // function taking a R value;


    int c = 102;
    int d = 200;
        cout<<A();
        const int&& val = A();// non Changeable;


    A(c);
    A(200);
    A(B());

return 0;
}