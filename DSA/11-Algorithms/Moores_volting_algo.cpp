#include<bits/stdc++.h>
using namespace std;
int main(){
//pain sum; // !Time Complicity : O(n^2)
  vector<int> pairsum;// storing the pairs elements;
  int size = 4,tar =  13; //array size and target sum;
  int arr[size] = { 2,7,11,15};//define array;
  for(int i = 0; i<size; i++){
    for(int j = j+1; j<size; j++){
      if(arr[i] + arr[j] == tar){ //condition checking, if the sum of two elements sum match the target sum;
        pairsum.push_back(arr[i]);//then store the elements into vector;
        pairsum.push_back(arr[j]);
        break;
      }
    }
  }
  cout<<"pair Sum is : "<<pairsum[0] <<" "<<pairsum[1]; //showing the output;
return 0;
//moore's volting algorithm
}