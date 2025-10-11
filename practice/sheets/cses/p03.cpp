// Date: 11.10.2025
// Repititions
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
ATTCGGGA
*/
void solve(){
  string s;
  cin >> s;

  int res = 1;
  int curr = 1;
  for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1]){
      curr++;
    }else{
      curr = 1;
    }
    res = max(res,curr);
  }

  cout << res << "\n";
}

int main(){
  solve();
  return 0;
}
