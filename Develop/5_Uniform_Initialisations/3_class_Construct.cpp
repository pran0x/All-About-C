#include<bits/stdc++.h>
using namespace std;
class obj{
    int x;
    int y;
    public:
        obj(int a, int b) : x(a), y(b){};
        void print(){
            cout<<x<<endl;
            cout<<y<<endl;
        }
};
obj func(int x, int y){
    return {x,y};
}
int main(){
obj ob = func(10,20);
ob.print();
return 0;
}