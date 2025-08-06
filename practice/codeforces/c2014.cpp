#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
aj = max(a1,a2,....an), aj -> aj + x, x=? find min value of x?
Unhappy Person = wealth of person < (average wealth)/2
Unhappy Population = more than half of population is unhappy

Example 1 : n = 4, a = [1,2,3,4]
here, aj = 4 => aj = 4 + x, x=?
avg wealth = (10 + x)/4;
for robin to appear, more than half folks should be unhappy
1 => 1 < (10 + x)/8
2 => 2 < (10 + x)/8
3 => 3 < (10 + x)/8

for x = 15; aj=25,  avg = 3.125
1,2 and 3 are unhappy => more than half of population is unhappy, hence Robin will arive

OBSERVATION : if(n<=2) => ans = -1;

2 2
aj = 2 + x
avg = (4+x)/2
1/2avg = (4+x)/4

2 < (4 + x)/4; => x = 5;
hence, 2, 7 => -1

ALGORITHM:
1. sort the array
2. let aj = max(a) + x;
*/

void solve(){
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(ll i=0;i<n;i++)
    cin >> a[i];

  if(n<=2){
    cout << -1 << "\n";
    return;
  }
  sort(a.begin(),a.end());

  ll sum = 0;
  for(int i=0;i<n;i++){
    sum += a[i];
  }

  ll x = (2*n*a[n/2] - sum + 1);

  cout << max(0LL,x) << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
