#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define cs cout<<endl<<"-------------------------"<<endl;
#define cn cout<<endl;
#define pf(x) cout<<x<<endl;
#define sc(x) cin>>x;
#define itr(i,vec) for(auto i : vec) cout<<i<<endl;
#define fr(itr,size) for(int i = 0; i < size; i++) cout<<i<<" "<<endl;
#define wh(com1,com2) while(com1 != com2) cout<<com1<<" "<<endl;
int src(int arr[], int st, int end, int target);
int main(){
bust;
int arr[10] = {20, 40,45, 12,-34,43,2,-32,-50,0};
int TargetElement = -32;
int size = sizeof(arr)/sizeof(arr[0]); // size of total array / size of one element;
int mid = size/2; // middle element of array;
int st = arr[0]; int end = arr[size-1]; // starting and ending element of array;
for (int i = 0; i < size; i++){
  if(TargetElement  > arr[mid]){ // if target element is greater than middle element;
    if( arr[src(arr, 0, mid, TargetElement)] == TargetElement){ // if target element is found in array;
    cout<<"Element found at index :"<< src(arr, 0, mid, TargetElement);
    break;
    }else st = mid;
  }
  else if(TargetElement < arr[mid]){
    if( arr[src(arr, mid, size, TargetElement)] == TargetElement){
      cout<<"Element found at index :"<< src(arr, 0, mid, TargetElement);
      break;
      }else end = mid;
    }
  else if(TargetElement == arr[mid]) {cout<<"Element found at index :"<< mid; break;}
}
return 0;
}
int src(int arr[], int st, int end, int target){
  for(int i = st; i < end; i++){
    if(arr[i] == target) return i;
  }
}