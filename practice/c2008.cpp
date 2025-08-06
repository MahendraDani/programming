#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int l,r;
  cin >> l >> r;

  int idx = 1;
  int a = l;
  while(a<=r){
    a = a + idx;
    idx++;
  }
  cout << idx-1 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
