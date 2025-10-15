// Date: 15.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
- the catch is numbers will start to overflow, so how to check if a number is prime?
  - last digit must not be divisible by 2

n=7, k=1 => 7 ,prime
n=7, k=2 => 77 = 7 * 11, not prime
n=7, k=3 => 777 = 7 * 111, not prime

n=12, k=1 => not prime
n=12, k=2 => 1212 => not prime

n=13, k=1=> prime
n=13, k=2=> 1313

n=52, k=1 => 52, not prime
n=52, k=2 => 5252 = 52 * 101 not prime
n=52, k=3 => 525252 = 52 * 10101 not prime

Assumption: any n, if performed operations k(k>1) is not a prime. So iff k=11, there's a posibility that number is prime
*/

bool isPrime(int n){
  if(n<=1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

void solve(){
  int n,k;
  cin >> n >> k;

  if(n>1 && k>1){
    cout << "NO\n";
  }else if(k==1){
    cout << (isPrime(n) ? "YES" : "NO") << "\n";
  }else {
    cout << (k==2 ? "YES" : "NO") << "\n";
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
