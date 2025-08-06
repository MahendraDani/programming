// Date: 05.08.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Properties of XOR:
1. a ^ a = 0
2. a ^ 0 = a
3. a ^ b = b ^ a
4. If a ^ b = c then b ^ c = a and a ^ c = b

Question 1: How to generate array such that total XOR == x?
Question 2: Given that I can find such arrays, how to get the one with least some?

CAN'T BE USED : Only positive integers are allowed 
One array that can always be formed : 
x ^ 0 ^ 0 ^ 0.....^0 = x, 0 -> n-1 times, but this is not the least sum array in all cases.

BUT LET's BE SMART:
x ^ a ^ a ^ a .... ^ a = x, in case when number of a is even => n%2!=0

when n is even x!=0
y ^ 1 ^ 1..... (n-1)1s = x
element = x ^ 1
sum = n-1 + element

when n is odd ans x!=0
x ^ 1 ^ ...... 1 = x; => sum = x + (n-1)

when x == 0, n is even
1 ^ 1 ^ 1... n times; => sum = n

when x == 0 and n is odd

*/
void solve(){
  int n,x;
  cin >> n >> x;

  if(n==1){
    if(x==0){
      cout << "-1\n";
    }else{
      cout << x << "\n";
    }
    return;
  }

  int y = __builtin_popcountll(x);
  if(y > n){
    cout << x << "\n";
    return; 
  }

  int ans = x + (n-y);
  if((n-y)%2){
    if(x==0 || x==1){
      ans+=3;
    }else{
      ans++;
    }
  }
  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
