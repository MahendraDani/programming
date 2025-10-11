// Date: 11.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Let n = 5, the array is
1,
1,2
1,2,3
1,2,3,4
1,2,3,4,5

1 occurs n times
2 occurs n-1 times
3 occurs n-3 times
....
n occurs 1 times
General: Any number k occurs n-k+1 times, k=1,2,...

let n=6, m=6, a = [3,1,2,3,4,1]

Assumption 01 - answer is simply the freq of highest number in a in the array?
Counter-example : Here 1 has freq 4 in given array, but the answer is 1?
n=4, m=2, a=[1,1]
array => {1,1,2,1,2,3,1,2,3,4}
*/

// TLE
void solve(){
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  for(int i=0;i<m;i++) 
    cin >> a[i];

  if(m==1){
    cout << n - a[0] + 1 << "\n";
    return;
  }
  vector<int> v;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      v.push_back(j);
    }
  }
  
  int cnt = 0;
  int i=0,j=0;
  while(i<v.size()){
    if(j==m){
      cnt++;
      j=0;
      continue;
    }
    if(a[j]!=v[i]){
      j=0;
    }else{
      j++;
    }
    i++;
  }
  cout << cnt << "\n";
}

void better(){
  int n, m;
  cin >> n >> m;

  vector<int> a(m+1);
  for(int i=1;i<=m;i++) 
    cin >> a[i];

  int ans = n - a[m] + 1;

  for(int i=2;i<=m;i++){
    if(a[i]==1) ans =1;
  }

  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    better();
  }
  return 0;
}
