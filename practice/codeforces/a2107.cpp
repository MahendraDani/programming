// Date : 06.08.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;
/*
Properties of GCD:
1. gcd(a,b) >= min(a,b)

Argument : Divide array such that B has only one element, the minimum element in array, and all the rest are in other subsequence.

Counter-example : {20,51,9,1}
=> B = {1}, C = {20,51,9}
here gcd(B) = 1 = gcd(C)
so in case we have 1 present in array, choose second min element

When such partition is not possible?
If all the elements are same : 
{3,3,3,3,3} becuase gcd(a,a,a,a,a,a) = gcd(a)

{1,3,3,3,3,3} => {3}, {1,3,3,3,3}
*/
// WA
void solve(){
  int n; 
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  vector<int> c(a.begin(),a.end());
  if(n==1){
    cout << "No\n";
    return;
  }
  sort(a.begin(),a.end());

  if(a[0] == a[a.size()-1]){
    // if all the elements are same
    cout << "No\n";
    return ;
  }
  int mn = a[0];
  int mn2 = a[1];
  
  bool isOne = false;
  if(mn==1){
    isOne = true;
  }

  cout << "Yes\n";
  for(int i=0;i<n;i++){
    if(a[i]==mn){
      if(isOne){
        cout << 2 << " ";
      }else{
        cout << 1 << " ";
      }
    }else if(a[i]==mn2){
      if(isOne){
        cout << 1 << " ";
      }else{
        cout << 2 << " ";
      }
    }else{
      cout << 2 << " ";
    }
  }
  cout << "\n";
}

void editorial(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  int mn = *min_element(a.begin(),a.end());
  int mx = *max_element(a.begin(),a.end());

  if(mn==mx){
    cout << "No\n";
    return;
  }
  cout << "Yes\n";
  for(int i=0;i<n;i++){
    cout << (1 + (a[i]==mx)) << " ";
  }
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    editorial();
  }
  return 0;
}
