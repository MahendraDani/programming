#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 *
 * sum (k + k-1 + k-2 + k-3 .... 1)A
 * aeiouuuu => 10 + 4 + 1 + 1 = 16
 * aeiouuui => 3 + 3 + 
palindromes of length 1 : length of string = 8
palindromes of length 2 : (no of chars repeating > 2 ) * (freq of char- 1)
palindromes of length 3 : 

n=7 => aeiouuu => 4 + 6 + 1
n=7 => aeiouae => 5 + 4 + 4 + 1 + 1
, aeiouaa
 */

void solve(){
  int n;
  cin >> n;
  vector<int> c{'a','e','i','o','u'};
  string ans;
  for(int i=0;i<c.size() && i<n;i++){
    ans += c[i];
  }

  if(n>c.size()){
    for(int i=1;i<=n-5;i++){
      ans += c[c.size()-1];
    }
  }

  cout << ans << "\n";
}

void optimal(){
  int n;
  cin >> n;

  string v = "aeiou";
  while(v.size() <= n){
    v += v;
  }
  v.resize(n);
  sort(v.begin(),v.end());
  cout << v << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    optimal();
  }
  return 0;
}
