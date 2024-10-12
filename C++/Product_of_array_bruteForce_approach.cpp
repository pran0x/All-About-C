#include<bits/stdc++.h>
using namespace std;
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
return 0;
}