#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int x,y;
  cin >> x >> y;

  int d = abs(x-y);
  if(x<y){
    cout << 2 << "\n";
  }else if(x==y){
    cout << -1 << "\n";
  }else{
    if(d==1){
      cout << -1 << "\n";
    }else{
      if(y==1){
        cout << -1 << "\n";
      }else{
        cout << 3 << "\n";
      }
    }
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
