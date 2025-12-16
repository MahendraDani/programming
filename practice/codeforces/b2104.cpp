// Date: 16.12.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n;
  cin >> n;

  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<ll> maxArr(n+1);
  for(int i=1;i<n+1;i++){
    maxArr[i] = max(maxArr[i-1], a[i-1]);
  }

  vector<ll> sumArr(n+1);
  for(int i=n-1;i>=0;i--){
    sumArr[i] = sumArr[i+1] + a[i];
  }

  for(int i=n;i>0;i--){
    cout << sumArr[i] + maxArr[i] << " ";
  }
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
