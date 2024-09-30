//problem set : https://leetcode.com/problems/majority-element/submissions/1407437626/
#include<bits/stdc++.h>
using namespace std;
int BruteForce(vector<int> &vec);//BruteForce Approach
int BinarySeach(vector <int> &vec); //using Shorting  and Binary Search;
int MooresVotingAlgo(vector<int> &vec);
int main(){
vector <int> vec = {2,2,3,4,2,1,2,4};
//BruteForce Approach
cout<<"majority of the Elements is (using Brute Force search): "<<BruteForce(vec)<<endl;
//Binary Approach with sorting elements; 
cout<<"majority of the Elements is ( using binary search) : "<<BinarySeach(vec)<<endl;
cout<<"majority of the Elements is ( using Moore's Algo) : "<<MooresVotingAlgo(vec)<<endl;
return 0;
}
//using BruteForce approach; //!Time complicity : O(n^2)
int BruteForce(vector<int> &vec){
int res;
for(int num : vec){
  short int count = 0;
  for(int check : vec){
    if(num == check){
      count++;
    }
  }
  if( count > (vec.size()/2)){
    res = num;
    return res;
  }
}
return 0;
}
//Using brute Force with Sorting binary search; //!Time complicity : O(nlogn) + O(n)  = O(nlogn)
int BinarySeach(vector<int> &vec){
  sort(vec.begin(),vec.end());
  int count = 1, ans = vec[0];
for(int i = 1; i < vec.size(); i++){
  if( vec[i] == vec[i-1]) count++; 
  else{
    count = 1; 
    ans = vec[i+1];
  }
  if( count > (vec.size())/2) return ans;
}
  return ans;
}
//? Here are the most optimized approach; 
//!Moore's Voting algorithms; Time Complicity o(n);
int MooresVotingAlgo(vector<int> &vec){
  int feq = 0, ans = 0;
  for(int i = 0; i< vec.size(); i++){
    if(feq == 0) ans = vec[i];
    if(ans == vec[i]) feq++;
    else feq--;
  }
  return ans;
}
