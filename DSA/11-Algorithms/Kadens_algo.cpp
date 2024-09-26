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
return 0;
}