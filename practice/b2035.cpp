#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

int N = 502;
vector<int> v(N); // 1-based index

void solve(){
  int n;
  cin >> n;
}

int main(){
  int t;
  cin >> t;

  v[1] = -1;
  v[2] = 66;
  v[3] = -1;
  v[4] = 3366;

  string s = "551";

  for(int i=4;i<N;i++){
    string gen;
    char ch = '0';
    gen += s.substr(0,s.size()-3) + ch + s.substr(s.size()-3,s.size());
  }

  while(t--){
    solve();
  }
  return 0;
}
