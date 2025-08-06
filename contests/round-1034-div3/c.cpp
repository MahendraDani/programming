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

  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  vector<int> minA(n);
  vector<int> maxA(n);
  
  int minE = INT_MAX;
  for(int i=0;i<n;i++){
    minE = min(minE,a[i]);
    minA[i] = minE;
  }

  int maxE = INT_MIN;
  for(int i=n-1;i>=0;i--){
    maxE = max(maxE,a[i]);
    maxA[i] = maxE;
  }

  string ans;
  for(int i=0;i<n;i++){
    if(a[i]==minA[i] || a[i]==maxA[i]){
      ans += "1";
    }else{
      ans += "0";
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
