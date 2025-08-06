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

  string s;
  cin >> s;

  int coins = 0;
  for(int i=1;i<n;i++){
    coins += s[i]=='@';

    if(s[i]=='*' && s[i-1]=='*'){
      break;
    }
  }

  cout << coins << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
