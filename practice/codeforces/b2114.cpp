// Date : 13.07.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> cnt(2);
  for(char c: s){
    cnt[c - '0']++;
  }
  int mn = max(cnt[0], cnt[1]) - n / 2;
  int mx = cnt[0] / 2 + cnt[1] / 2;
  if(k >= mn && (k - mn) % 2 == 0 && k <= mx) cout << "YES\n";
  else cout << "NO\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
