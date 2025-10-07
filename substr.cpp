// Date: 13.09.2025
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  string s;
  cin >> s;

  vector<int> hash(26);
  for(int i=0;i<s.size();i++){
    hash[s[i]-'a'] = 1;
  }

  string res;
  for(int i=0;i<s.size();i++){
    if(hash[s[i]-'a']>0){
      res += s[i];
      hash[s[i]-'a'] = 0;
    }
  }
}

int main(){
  solve();
  return 0;
}
