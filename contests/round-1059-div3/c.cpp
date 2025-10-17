#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
We just need to swap the bits that are different between a and b to make them equal to those in b.
Q: When is the answer -1?
=>When we can choose no such x, which is less than a

Assumption: if a < b, then answer is -1
Counter-example => x=2
let a= 5, b = 7
a = 5 ^ 2 = 7


Q: Why specifically 100 queries?
100 bits?
*/
void solve(){
  int a,b;
  cin >> a >> b;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
