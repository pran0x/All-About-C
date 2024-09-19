//Finding max and min value of a array by using function-> min and max;
#include<bits/stdc++.h>
using namespace std;
int main(){
int num[10] = {20, 40,45, 12,-34,43,2,-32,-50,0};
int smallest = INT_MAX; // +infinite
int largest = INT_MIN; //-infinite
for (int i = 0; i < 10-1; i++)
{
  //finding max and min value in a array;
  smallest = min(num[i],smallest); //comparing with index[i] to smallest number;
  largest = max(num[i],largest); //comparing to with index[i] to largest number;
}
//index finding;
short int index_small, index_large;
for (int i = 0; i < 10-1; i++)
{
  if( num[i] == smallest) index_small = i;
  if( num[i] == largest) index_large = i;
}

cout<<"Max number is : "<<largest<<" INDEX : "<<index_large<<endl;
cout<<"Min number is : "<<smallest<<" INDEX : "<<index_small<<endl;
return 0;
}