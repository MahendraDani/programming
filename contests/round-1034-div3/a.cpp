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

  if(n<=3){
    cout << "Alice\n";
    return;
  }

  if(n%2==0){
    cout << "Bob\n";
  }else{
    cout << "Alice\n";
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
