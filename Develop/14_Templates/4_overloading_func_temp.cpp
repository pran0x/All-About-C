#include<bits/stdc++.h>
using namespace std;
template < class T>
void f ( T x, T y){
    cout<<"Template Func called!."<<endl;
}
void f(int x, int y){
    cout<<"Non Template Func Called."<<endl;
}
int main(){
f( 1, 2); // non template func called!
f('a','b'); // template called !
f(1, 'c'); // Non- template  called !
return 0;
}

// non template  func  takes precedence in the overload regulation;