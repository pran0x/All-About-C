/**
 * @brief Performs a binary search on a sorted vector to find the index of a target element.
 * 
 * This function searches for a target element within a sorted vector using the binary search algorithm.
 * It returns the index of the target element if found, otherwise it returns -2.
 * 
 * @param array A reference to a vector of integers, which should be sorted in ascending order.
 * @param target_elements The integer value to search for within the vector.
 * @return int The index of the target element if found, otherwise -2.
 */
#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> &array,int target_elements);
int main(){
  vector <int> arr= {-1,0,3,4,5,9,12};
  int  target=3;
  cout<<"Binary Search... Target index is : "<<Binary_Search(arr,target)+1<<endl;// +1 for array index starting from 0;
return 0;
}
//! Time complicity is O(logn);

int Binary_Search(vector<int> &array, int target_elements){
  int tar = target_elements, str = 0,end = array.size();
  for(int i = str; i< end; i++){
    if( tar == array[i]) return i; // finding target element;
    else{
      int mid = str + (end- str)/2; // finding mid element; optimized for avoid overflow;
      if( tar < mid){
        end = mid-1; // if target less then mid then  search in left half;
      }
      else if( tar > mid ){
        str = mid+1;// if target grater then mid then search in right half;
      }
    }
  }
  return -2;
}
