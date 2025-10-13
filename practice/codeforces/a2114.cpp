// Date: 13.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
(a+b)^2 = a^2 + b^2 + 2*a*b

1. check if a number is perfect square
  1. check if it can be represented as (a+b)^2 ? print a b
  2. else print -1
2. else print -1


If a number is perfect square then answer is always 0 and sq
*/

void solve(){
  int n;
  cin >> n;

  int sq = ceil(sqrt(n));
  if(sq * sq == n){
    cout << 0 << " " << sq << "\n";
  }else{
    cout << -1 << "\n";
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
