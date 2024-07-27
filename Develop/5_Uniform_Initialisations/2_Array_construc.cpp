#include<bits/stdc++.h>
using namespace std;

class OBJECT{
    int arr [4];
    public:
    OBJECT(int x, int y, int z, int w) : arr{x,y,z,w}{};
    void print(){
        for (int i = 0; i < 4 ; i++)
        {
            cout<<*(arr + i)<<endl;
        }
        
    }
};

int main(){
    OBJECT arr(5, 6, 7 ,8);
    arr.print();
return 0;
}