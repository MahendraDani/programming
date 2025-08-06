// Date : 11.07.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// if oneCnt is even && n > 2, the state can always be acheived
// if cnt ==2, need to check that the ones are not adjacent
void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  int cnt = 0;
  int minOne = n;
  int maxOne = 0;
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
      cnt++;
      minOne = min(minOne,i);
      maxOne = max(maxOne,i);
    }
  }
  
  if(cnt%2!=0){
    cout << "NO\n";
  }else{
    if(cnt == 2 && maxOne - minOne ==1){
      cout << "NO\n";
    }else{
      cout << "YES\n";
    }
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
