#include<bits/stdc++.h>
using namespace std;
int main(){
    //[] -> captures ()-> parameters;
        //!Both three expression are ok!
    // auto lambda = [](){
    //     cout<<"I am a lambda Function.\n";
    // };
    
    // auto lambda = [](void){
    //     cout<<"I am a lambda function\n";
    // };

    // auto lambda = [](void)->void{
    //     cout<<"I am a lambda function\n";
    // };
    // lambda()
                            //   ?-> return type
    auto lambda = [](int x, int y) ->int {
        // cout<<"Sum of no's is : "<<x+y<<endl;
        return x+y;
    }; 
    int a = lambda(5,6); 
    cout<<a<<endl;
return 0;
}

  