// Date: 18.12.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n = 3;
  vector<int> a(n);
  
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  if(a[n-1] - a[0] >= 10){
    cout << "check again\n";
  }else {
    cout << "final " << a[1] << "\n";
  }
}

int main(){
  solve();
  return 0;
}
