#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
Cm = color that appears maximum number of times
Then, to paint the ribbon with all same colors, bob needs >= n-Cm

How to find Cm?
Cm = (n+m-1)/m; How?
*/

void solve(){
  int n,m,k;
  cin >> n >> m >> k;

  int cmax = (n+m-1)/m;
  if(k >= n-cmax){
    cout << "NO\n";
  }else{
    cout << "YES\n";
  }
}

int main(){
  int tt;
  cin >> tt;

  while(tt--){
    solve();
  }
  return 0;
}
