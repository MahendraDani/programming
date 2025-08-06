#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n, j, k;
  cin >> n >> j >> k;

  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int player = arr[j-1];

  sort(arr.begin(),arr.end());
  if(k==1){
    if(player == arr[n-1]){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }else{
    cout << "YES\n";
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
