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

  vector<int> a(n);
  for(int i=0;i<n;i++)
    cin >> a[i];

  for(int i=0;i<n-1;i++){
    if(a[i] > a[i+1] && a[i]-a[i+1]==1){
      swap(a[i],a[i+1]);
    }
  }

  int ok = true;
  for(int i=1;i<n;i++){
    if(a[i] < a[i-1]){
      ok = false;
      break;
    }
  }
  cout << (ok ? "YES" : "NO") << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
