//Problem Link : https://leetcode.com/problems/search-in-rotated-sorted-array/
#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int ArrayRotation(int* arr, int size, int tar);
int main(){
bust;
int arr[] = {4,5,6,7,0,1,2};
int  size = sizeof(arr)/sizeof(arr[0]), target = 0;

cout<<"Target Element is at index : "<<ArrayRotation(arr,size,target);
return 0;
}
int ArrayRotation(int* arr,int size, int tar){
  int st = 0, end = size-1;
  while( st <= end){
    int mid = st + (end-st)/2; //  to avoid overflow;

  if( arr[mid] == tar) return mid;

  if(arr[st] <= arr[mid]){ // left half is sorted;
      if( arr[st]  <= tar && tar <= arr[mid]) end = mid -1;
      else st = mid +1;
    }
    else{ //Right half sorted;
      if( arr[mid] <= tar && tar <= arr[end]) st = mid +1;
      else end = mid -1;
    }  
  }
  return -1;
}