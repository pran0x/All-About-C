#include<bits/stdc++.h>
using namespace std;
void func(int num[],int size); //function for displaying array elements;
int main(){
int num[5] = { 20, 50, 60, 70, 80};

cout<<"BEFORE REVERSE"<<endl;
func(num, 5);

//Reversing arrays;
int start = 0, end = sizeof(num)/sizeof(int)-1;
while ( start < end){
  swap(num[start], num[end]);
  start++; end--;
}

cout<<endl<<"AFTER REVERSE"<<endl;
func(num,5);

return 0;
}
//define display array elements;
void func(int num[],int size){
  for (int i = 0; i < size; i++){
  cout<<num[i]<<"\t";
  }
}