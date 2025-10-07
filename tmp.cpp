#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getSubIdx(vector<int> prices, int k){
  int sum =0, maxSum = INT_MIN;
  for(int i=0;i<k;i++){
    sum += prices[i];
  }
  int idx = 0;
  maxSum = sum;
  int j = k, i=0;
  while(j<prices.size()){
    sum += prices[j];

    sum -= prices[i];
  
    if(sum > maxSum){
      idx = i + 1;
      maxSum = sum;
    }

    j++;i++;
  }
  return idx;
}

int solve(vector<int>& prices, vector<int>& algo, int k){
  int idx = getSubIdx(prices,k);
  int ans = 0;
  for(int i=0;i<prices.size();i++){
    if(i>=idx && i<idx + k){
      ans += prices[i];
    }else{
      if(algo[i]==0){
        ans -= prices[i];
      }else{
        ans += prices[i];
      }
    }
  }
  return ans;
}

int main(){
  vector<int> prices {2,4,1,5,2,6,7};
  vector<int> algo {0,1,0,0,1,0,0,1};
  int k = 4;
  cout << solve(prices,algo,k) << "\n";
  return 0;
}
