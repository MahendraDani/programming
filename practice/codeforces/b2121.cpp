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
  string s;
  cin >> s;

  map<char,int> mp;
  for(int i=1;i<n-1;i++){
    mp[s[i]]++;
  }

  bool ok = false;
  for(auto [ch,f]:mp){
    if(f>=2){
      ok = true;
      break;
    }else if(ch == s[0] || ch==s[n-1]){
      ok = true;
      break;
    }
  }

  if(ok){
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
