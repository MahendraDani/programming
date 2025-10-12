// Date: 12.10.2025
// Increasing Array
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
if a[i] < a[i-1]
res += a[i-1] - a[i]
*/
void solve(){
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(ll i=0;i<n;i++)
    cin >> a[i];

  ll res =0;
  for(ll i=1;i<n;i++){
    if(a[i] < a[i-1]){
      res += a[i-1] - a[i];
      a[i] = a[i-1];
    }
  }
  cout << res << "\n";
}

int main(){
  solve();
  return 0;
}
