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

  if(n==2){
    cout << -1 << " " << 2 << "\n";
    return;
  }

  int i=0;
  while(i<n-1){
    if(i%2==0){
      cout << -1 << " ";
    }else{
      cout << 3 << " ";
    }
    i++;
  }

  if(n%2==0){
    cout << 2 << " ";
  }else{
    cout << -1 << " ";
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
