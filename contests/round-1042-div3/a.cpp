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
  
  vector<int> b(n);
  for(int i=0;i<n;i++){
    cin >> b[i];
  }

  int ans = 0;
  for(int i=0;i<n;i++){
    if(a[i] > b[i]){
      ans += (a[i] - b[i]);
    }
  }

  cout << ans + 1 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
