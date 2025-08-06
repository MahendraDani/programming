#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

ll gcd(ll a,ll b){
  while(b){
    a %= b;
    swap(a,b);
  }
  return a;
}

void solve(){
  int n;
  cin >> n;

  vector<ll> a(n);
  for(int i=0;i<n;i++)
    cin >> a[i];

  int mn = min_element(a.begin(),a.end()) - a.begin();
  ll g = 0;
  for(int i=0;i<n;i++){
    if((i!=mn && a[i]%a[mn]==0)){
      g = gcd(g,a[i]);
    }
  }

  if(g==a[mn]){
    cout << "YES\n";
  }else{
    cout << "NO\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
