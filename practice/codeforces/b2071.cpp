// Date : 13/07/2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

bool isSquare(ll n){
  if(n<0){
    return false;
  }
  ll root = (ll)sqrt(n);
  return n == root * root;
}

void solve(){
  ll n;
  cin >> n;

  if(isSquare(n*(n+1)/2)){
    cout << -1 << "\n";
    return;
  }
  ll i=2;

  while(i<=n){
    cout << i << " ";
    i += 2;
  }

  i=1;
  while(i<=n){
    cout << i << " ";
    i += 2;
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
