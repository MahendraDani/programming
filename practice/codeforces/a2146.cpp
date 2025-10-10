// Date: 10.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
ans => number of distinct chars * min occurrence
NO, we can also skip some elements, in order to get max length
Ex : skip 4 and 5 completely here
15
1 1 1 1 1 2 2 2 2 3 3 3 4 4 5

1: dist=1, freq=5 => ans=5
2: dist=2, freq=4 => ans=max(5,2*4)=8
3: dist=3, freq=3 => ans=max(8,3*3)=9
4: dist=4, freq=2 => ans=max(9,8) => DON't INCLUDE 4 in subsequence, dist=3, freq=3
5: dist=4, freq=1 => ans=max(9,4*1) => DON'T INCLUDE 5
*/
void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  
  map<int,int> mp;
  for(int i=0;i<n;i++){
    mp[a[i]]++;
  }
  
  int res =0;
  for(int f=1;f<=n;f++){
    int cnt =0;
    for(auto [key,val]:mp){
      if (val >= f)
        cnt++;
    }
    res = max(res, cnt * f);  
  }

  cout << res << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
