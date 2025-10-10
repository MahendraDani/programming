// Date: 10.10.2025
// Missing number 
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  ll n;
  cin >> n;
  
  vector<ll> a(n);
  for(ll i=0;i<n-1;i++) cin >> a[i];

  ll esum = n * (n+1)/2;
  ll sum = 0;
  for(ll i=0;i<n;i++){
    sum += a[i];
  }

  cout << esum - sum << "\n";
  
}

int main(){
  solve();
  return 0;
}
