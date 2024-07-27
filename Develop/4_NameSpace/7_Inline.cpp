#include<bits/stdc++.h>
using namespace std;
namespace s1{
    inline namespace s2{
        inline namespace s3{
            int x = 10;
        }
    }
}
int main(){
//inline namespace s2 is treated as a s1 
cout<<s1:: x <<endl;
return 0;
}