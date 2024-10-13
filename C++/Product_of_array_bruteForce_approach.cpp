#include<bits/stdc++.h>
using namespace std;
vector<int> optimalWay(vector <int> &nums);
int main(){
////! Code is not optimal, time complicity O(n^2);
// int nums = 4,arr[nums] = {1,2,3,4};
// vector<int> vec;//Dynamic array;
// for (int i=0; i< nums; i++){
//   int mul = 1;
//   for(int j = 0; j< nums; j++){
//     if( arr[j] == arr[i] ) continue;
//     else mul *= arr[j]; 
//   }
//   vec.push_back(mul);
// }
// for ( auto i :vec){
//   cout<<i<<"\t";
// }
vector <int> nums = {1,2,3,4};
int size = nums.size();
vector<int> prefix(size, 1);//size and starting element 1;
vector<int> suffix(size, 1);
prefix[0]  = 1; //staring element is 1;
suffix[size-1] = 1; // ending element is 1;
for(int i = 1; i <size; i++){
  prefix[i] = prefix[i-1] * nums[i-1]; // prefix idex i-1 = [0] index multiply by nums index i-1 = [0] index elements;
}
for( int i = size-2; i >= 0; i--){
  suffix[i] = suffix[i+1] * nums[i+1];//suffix index i+1 = 2 index multiply by nums index i+1 = 2 index elemets;
}
for (int i = 0; i < size; i++)
{
  cout<<prefix[i]*suffix[i]<<"\t"; // output
}
//Doing optimal way,time complicity O(n) and space complicity is O(n);
vector <int> val = optimalWay(nums);
for(int i : val){
  cout<<i<<"\t";
}
return 0;
}
vector<int> optimalWay(vector <int> &nums){
  int n = nums.size();
  vector<int> ans(n,1);
  int suf = 1;
  for(int i = 1; i < n; i++){
    ans[i] = ans[i-1] * nums[i-1];
  }
  for(int i = n-2; i >= 0; i--){
    suf *= nums[i+1];
    ans[i] *= suf;
  }
  return ans;
}