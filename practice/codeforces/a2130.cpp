// Date: 16.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Assumption: The answer is sum of all elements of set, and in case of zero add 1
*/

void solve(){
  int n;
  cin >> n;

  int sum = 0;
  for(int i=0;i<n;i++){
    int x;
    cin >> x;
    if(x==0){
      sum += 1;
    }else{
      sum += x;
    }
  }

  cout << sum << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
