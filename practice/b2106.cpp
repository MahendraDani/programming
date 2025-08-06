#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n, x;
  cin >> n >> x;

  for(int i=0;i<n;i++){
    if(i==x)
      continue;

    cout << i << " ";
  }

  if(x<n){
    cout << x;
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
