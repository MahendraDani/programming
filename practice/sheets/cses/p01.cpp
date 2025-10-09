// Date: 09.10.2025
// Weird Algorithm
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void recur(ll n){
  if(n==1){
    cout << n << "\n";
    return;
  }

  cout << n << " ";

  if(n%2==0){
    recur(n/2);
  }else{
    recur(3*n+1);
  }
}

void better(ll n){
  while(n>=1){
    if(n==1){
      cout << 1 << "\n";
      break;
    }
    cout << n << " ";
    if(n%2==0){
      n/=2;
    }else{
      n = 3*n +1;
    }
  }
}

void solve(){
  ll n;
  cin >> n;

  better(n);
}

int main(){
  solve();
  return 0;
}
