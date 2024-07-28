#include<bits/stdc++.h>
using namespace std;
template<class T>
void func(T a){
    cout<<"main template function :" <<a<<endl;
}
template<>
void func(int a){
    cout<<"Specialized function called : "<<a<<endl;
}
template<class T>
class Testing{
    public:
        Testing(){
            cout<<"normal template.\n";
        }
};
template<>
class Testing<int>{
    public:
        Testing(){
            cout<<"Specialized  template constructor\n";
        }
};
int main(){
    func('a'); 
    func(100);
    func(10.33);

    Testing<int> a; // because we have define int class separately
    Testing<char> n;
    Testing<float>c;;
return 0;
}