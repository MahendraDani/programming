// Date : 29.07.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,s;
  cin >> n >> s;

  vector<int> a(n);
  for(int i=0;i<n;i++)
    cin >> a[i];
    
  if(s > a[n-1]){
    cout << s - a[0] << "\n";
  }else if(s < a[0]){
    cout << a[n-1] - s << "\n";
  }else{
    int c1 = s - a[0] + a[n-1] - a[0];
    int c2 = a[n-1] - s + a[n-1] - a[0];

    cout << min(c1,c2) << "\n";
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
