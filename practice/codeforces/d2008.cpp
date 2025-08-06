// Date : 10.07.2025 - 11.07.2026
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

  vi a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
    a[i]--;
  }

  string s;
  cin >> s;

  vector<int> ans(n), vis(n);
  for(int i=0;i<n;i++){
    if(vis[i])
      continue;

    int cnt = 0, u = i;
    vector<int> path;
    while(!vis[u]){
      vis[u] = 1;
      cnt += s[u] == '0';
      path.push_back(u);
      u = a[u];
    }

    for(int v: path){
      ans[v] = cnt;
    }
  }

  for(int i=0;i<n;i++){
    cout << ans[i] << " ";
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
