#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Answer is 0 when : 
- there are two different sums

Answer is 1 when :
- threre is exactly one sum

In other case:
- ans is k + min(a) - max(a) + 1
 */
// IMPLEMENTATION ERROR
void solve(){
  int n,k;
  cin >> n >> k;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b(n);
  for(int i=0;i<n;i++) cin >> b[i];

  int reqSum = -1;
  bool diffSum = false;

  int amax = INT_MIN, amin = INT_MAX;
  for(int i=0;i<n;i++){
    if(a[i]>=0 && b[i]>=0){
      if(reqSum==-1){
        reqSum = a[i] + b[i];
      }else{
        if(a[i] + b[i] != reqSum){
          diffSum = true;
          break;
        }
      }
    }
    amax = max(amax,a[i]);
    amin = min(amin,a[i]);
  }

  if(reqSum == -1){
    cout << k  + amin - amax + 1 << "\n";
    return;
  }
  
  if(diffSum){
    cout << "0" << "\n";
    return;
  }

  if(reqSum > k || amax > reqSum){
    cout << "0" << "\n";
    return;
  }
  cout << "1" << "\n";
}

void optimal(){
  int n,k;
  cin >> n >> k;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b(n);
  for(int i=0;i<n;i++) cin >> b[i];

  int s = -1;
  for(int i=0;i<n;i++){
    if(b[i]!=-1){
      if(s==-1)
        s = a[i] + b[i];
      else{
        if(s != a[i] + b[i]){
          cout << 0 << "\n";
          return;
        }
      }
    }
  }

  if(s==-1){
    sort(a.begin(),a.end());
    cout << k - a[n-1] + a[0] + 1 << "\n";
    return;
  }

  for(int i=0;i<n;i++){
    if(a[i] > s || s - a[i] > k){
      cout << 0 << "\n";
      return;
    }
  }
  cout << 1 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    optimal();
  }
  return 0;
}
