#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  string s;
  cin >> s;

  int lcnt = 0;
  for(int i=0;i<s.size();i++){
    if(islower(s[i])){
      lcnt++;
    }
  }

  if(lcnt <s.size() - lcnt){
    // convert all lower to upper
    for(int i=0;i<s.size();i++){
      if(islower(s[i])){
        s[i] = s[i] - 32;
      }
    }

    cout << s<< "\n";
  }else{
    for(int i=0;i<s.size();i++){
      if(isupper(s[i])){
        s[i] = s[i] + 32;
      }
    }
    cout << s << "\n";
  }
}

int main(){
  solve();
  return 0;
}
