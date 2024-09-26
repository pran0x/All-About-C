#include<bits/stdc++.h>
using namespace std;
int main(){
  int size = 5;
  int  x[size] = {1,2,3,4,5}; // init an array;
  //simple sub array
  for(int st = 0; st < size; st++){ // loop for starting first number;
    for(int en = st; en < size; en++){ // locating end number which starts from the iterator st;
      for ( int i = st; i <= en; i++){ // printing elements from st to en;
        cout << x[i];
      }
      cout<<" ";
    }
    cout<<endl;
  } 
  cout<<endl<<endl;
  //!Brute-Force approach;
  int Max_Sum = INT32_MIN;
  for( int st = 0; st < size; st++){
    int Curr_Sum = 0; // sum of sub array elements;
    for( int en = st; en < size; en++){
      Curr_Sum += x[en];// addition all the elements of sub-array
      cout<<"For : "<<st<<" -> "<<Curr_Sum<<endl; // showing sum of first sub-array elements [in order];
    }
      cout<<"Max sum is "<<Max_Sum<<" Current Sum is :  "<<Curr_Sum<<endl; // comparing  max sum and current sum;
      Max_Sum = max(Curr_Sum, Max_Sum);
            cout<<"After Swapping , Max Sum is :  "<<Max_Sum<<endl;
  }
  cout<<" Max Sum is : "<< Max_Sum<<endl;
return 0;
}