// Date: 16.12.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Assume that we form a square of coordinates (0,0), (x,0), (x,y), (0,y)
then the hypothesis is that the path along the border will have the least number of crossings.
and that will be just all the vertical lasers encountered (m) + all the horizontal lasers encountered.
*/
void solve(){
  int n, m, x, y;
  cin >> n >> m >> x >> y;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b(m);
  for(int i=0;i<m;i++) cin >> b[i];

  cout << n + m << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
