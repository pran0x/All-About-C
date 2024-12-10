// Problem: https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int searchPeak(int* arr, int size);
int main(){
  int arr[] = {3,5,3,2,0};
  int size = sizeof(arr)/sizeof(arr[0]); // size declaration;
  cout<<searchPeak(arr,size)<<endl;
  return 0;
}
int  searchPeak(int* arr, int size){
  int st = 1, end = size-2; // for avoid overflow of Index;
 while(st <= end){
    int mid = st + (end-st)/2; // for better optimization;
    if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){ // if both is true then retrun the index;
      return mid;
    }else{
      if(arr[mid] < arr[mid+1]){ // check the right side;
        st = mid+1;
      }else end = mid-1;
    }
  }
  return -1;
}