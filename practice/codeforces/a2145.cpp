// Date: 12.10.2025
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

  if(n%3==0){
    cout << 0 << "\n";
    return;
  }

  cout << 3 - n%3 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
