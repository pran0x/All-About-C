#include<bits/stdc++.h>
using namespace std;
vector<int> BetterApproach(int arr[],int size,int tar);//function for using better Approach's
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
  cout<<"pair Sum is : "<<pairsum[0] <<" "<<pairsum[1]<<endl; //showing the output;
  vector <int> ouput = BetterApproach(arr,size,tar);
  cout<<"pair Sum is : "<<ouput[0] <<" "<<ouput[1]<<endl; //showing the output;
  
return 0;
}

vector<int> BetterApproach(int arr[], int size, int tar){ // ! Now the time complicity is O(n)
  vector<int> vec; // stored pairsum;
  int i = 0, j = size-1; // pointer  for start and end of array;
while (i < j){ // run until i == j;
  int pairSum = arr[i] + arr[j]; // pairsum of i & j;
  if (pairSum < tar)  i++; // if bigger then increment i;
  else if ( pairSum > tar)  j--; // if pairsum bigger then target then decrement j;
  else{//otherwise add them into vector;
    vec.push_back(arr[i]); 
    vec.push_back(arr[j]);
  return vec;
    }
  }
}
