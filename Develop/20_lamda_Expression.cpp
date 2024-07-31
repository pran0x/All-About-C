#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printVector(vector< int> vec){
 for_each(vec.begin(),vec.end(),[](int i){
  cout<<i<<" ";
 });
 cout<<endl;
}
int main(){
vector<int> v = {4, 1, 3, 4, 5, 6, 7, 8};
printVector(v);//printing values;
//finding values;                 //Capture the Value []
vector<int> :: iterator p = find_if(v.begin(),v.end(),[](int i)
 {return  i>4;});
 cout<<"First Num grater than 4 is : "<<*p<<endl;
//Sorting values;       store two values and return as a short of decreasing order;
sort(v.begin(), v.end(),[](const int &a, const &b)->bool
 {return a>b;});
 printVector(v);
//number count;
int count = count_if(v.begin(),v.end(),[](int a)
{return (a>=5);});
cout<<"The Number of elements greater than or equal to 5 are : "<<count<<endl;
//Removing duplicates;
p = unique(v.begin(), v.end(),[] (int a, int b)
 {return a==b;});
 cout<<"Unique Elements are : ";
 printVector(v);
//Factorial  Number;
int arr[] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
int f = accumulate(arr, arr+10,1,[](int i, int j)
{return i*j;});
cout<<"Factorial of 10 is : "<<f<<endl;
//Square of a Number;
auto square = [](int i)
 {return i *i;};
 cout<<"Square of 6 is : "<<square(6)<<endl;
return 0;
}