// Date: 18.10.2025
// https://codeforces.com/problemset/problem/1624/B
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
OBSERVATIONS:

a, b and c are said to be in A.P iff 2*b = a + c
AP: a, b=a + d, c=a + 2d
6, 10, 26
*/
void solve(){
  int a, b, c;
  cin >> a >> b >> c;

  if(2*b*m = a + c){
    cout << "YES"  << "\n";
  }else if(2*b = a*m + c){
    cout << "YES\n";
  }else if(2*b = a + m * c){
    cout << "YES\n";
  }else{
    cout << "NO\n"
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
