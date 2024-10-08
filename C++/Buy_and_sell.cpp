//problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<bits/stdc++.h>
using namespace std;
int main(){
int price = 5, arr[price] = {7,6,4,3,1};
int best_buy = arr[0], best_sell = 0;
for(int i = 1; i < price; i++){
  if( arr[i] > best_buy){
    best_sell = max(best_sell,arr[i]-best_buy);
  }
  best_buy = min(best_buy,arr[i]);
}
cout<<"BEST BUY IS : "<<best_buy<<"\nBest Sell is : "<<best_sell<<endl;
return 0;
}