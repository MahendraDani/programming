// Date : 12.07.2025
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

  int steps = 0;
  if(n%2!=0){
    n-=k;
    steps++;
  }
  
  steps += n/(k-1);

  if(n%(k-1)!=0){
    steps++;
  }

  cout << steps << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
