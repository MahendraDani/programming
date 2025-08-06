#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// Fixed-size sliding window
void solve(){
  string s;
  cin >> s;

  string s1 = "1111111";
  string s2 = "0000000";

  if(s.find(s1) !=-1){
    cout << "YES\n";
  }else if(s.find(s2)!=-1){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
}

int main(){
  solve();
  return 0;
}
