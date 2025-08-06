#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,m,i,j;
  cin >> n >> m >> i >> j;

  int dx1 = max(abs(1-i),abs(n-i));
  int dy1 = max(abs(1-j),abs(m-j));

  int x1 = dx1 + i > n ? abs(dx1 - i) : abs(dx1 + i);
  int y1 = dy1 + j > m ? abs(dy1 - j) : abs(dy1 + j);

  int dx2 = max(abs(1-x1),abs(n-x1));
  int dy2 = max(abs(1-y1),abs(m-y1));

  int x2 = dx2 + x1 > n ? abs(dx2 - x1) : abs(dx2 + x1);
  int y2 = dy2 + y1 > m ? abs(dy2 - y1) : abs(dy2 + y1);

  cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
