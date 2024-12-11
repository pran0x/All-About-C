//problem link : https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/

#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//Method Init;
int SingleElementFind(vector <int>& array);

int main(){
bust;
vector <int> arr = {1,1,2,2,3};
cout<<SingleElementFind(arr);
return 0;
}
//Call by reference;
int SingleElementFind(vector<int> &array){
  int size = array.size();
  int st = 0, en = size-1;
  if( size == 1) return array[0]; // if only one element;
  while (st <= en){
    int mid = st + (en - st)/2; // set mid;

    if(mid == 0 && array[0] != array[1]) return array[mid]; // if mid is at 0 index;
    if(mid == size-1 && array[size-1] != array[size-2]) return array[mid]; // if mid is at last index;

    if((array[mid] != array[mid-1]) && (array[mid] != array[mid+1])) return array[mid]; // checking both index element;

    if(mid % 2 == 0){ // if mid even;
        if(array[mid] == array[mid-1]) en = mid-1; // checking mid and mid -1 are same or not;
        else st = mid+1;//opposite;
      }else{ // if odd;
        if(array[mid] == array[mid-1]) st = mid+1; //if same check the right side;
        else en = mid-1; // either left side;
      }
  }
  return -1;
}
