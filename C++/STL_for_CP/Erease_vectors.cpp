//Erase vector elemets from a specific portion;
/* 
input:
6
1 4 6 2 8 9
2
2 4
output:
3
1 8 9 
problem set: https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vec;
    int N,x,a,b;
    cin>>N;
    while (N--) {
        int v;
        cin>>v;
        vec.push_back(v);
    }
    cin>>x>>a>>b;
    vec.erase(vec.begin()+x-1);
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);
        cout<<vec.size()<<endl;
    for(int i : vec){
        cout<<i << " ";
    }
    return 0;
}
