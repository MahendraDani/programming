// Date: 13/10/2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
in which case the answer would be NO?
1. both strings don't contain any zero
2. if a[0] == 1 && b[1]==1, the answer is NO

Assumption : If (a[0]!=1 && b[1]!=1), and there exists more than or equal to n zeores answer will be YES.
counter case?

0 0 1 1
0 0 1 1

=> 0 1 1 1
=> 0 0 0 1

=> 0 0 1 1
=> 1 0 0 1

=> 0 0 0 1
=> 1 1 0 1

=> 0 0 0 0
=> 1 1 1 1

so YES



FAILED:
Now : It's zig-zag count that's relevant
*/

void solve(){
  int n;
  cin >> n;

  string a, b;
  cin >> a >> b;

  int cnt = 0;
  for(int i=0;i<n;i++){
    if(i%2==0){
      if(a[i]=='0') cnt++;
    }else{
      if(b[i]=='0') cnt++;
    }
  }

  if(cnt < (n%2==0 ? n/2 : n/2 + 1)){
    cout << "NO\n";
    return;
  }
  
  cnt = 0;
  for(int i=0;i<n;i++){
    if(i%2==0){
      if(b[i]=='0') cnt++;
    }else{
      if(a[i]=='0') cnt++;
    }
  }

  if(cnt < n/2){
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
