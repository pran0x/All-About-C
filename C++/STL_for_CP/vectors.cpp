#include<bits/stdc++.h>
using namespace std;
int main(){
  //vector declaration;
 vector<int> vec = {20, 30 , 40};
 vector <int> vec2 (5,0);//created a vector, size is 5 , all elements are 0;
//displaying vectors;
for(int i : vec){
  cout<<i << "\t";
}
//vectors deferent data types;
vector <char> VecChar = {'p', 'r', 'a', 'n', 't', 'o'};
for(char x : VecChar){
  cout<< x <<"\t";
}
//vectors size find out func;
cout<< "size of vec " << VecChar.size()<<endl;
//pushing elements into vectors;
VecChar.push_back('+');
VecChar.push_back('j');
VecChar.push_back('u');
VecChar.push_back('i');
cout<< "size of vec " << VecChar.size()<<endl;
for(char x : VecChar){
  cout<< x ;
}
//poping elements from the vectors;
vec.pop_back();
for(int i : vec){
  cout<<i << "\t";
}
return 0;
}