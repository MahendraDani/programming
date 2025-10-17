#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
The maxium subarray is the maxium element in the array
*/
void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++)
    cin >> a[i];

  int mx = -1;
  for(int i=0;i<n;i++){
    mx = max(mx,a[i]);
  }

  cout << mx << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
