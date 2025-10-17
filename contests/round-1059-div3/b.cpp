#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Case 01: The string is increasing, then always possible to get subsequence.
  - remove all chars => empty string is a palindrome

Case 02: String is decreasing => just remove all zeroes
  - 11110000

Case 03: Any random sequence

Q:When is the answer -1?

Q:Won't removing all zeros give me a palindrome?
11001100101 => 111111

Just remove all zeroes!

1111 => palindrome
*/
void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> res;
  for(int i=0;i<n;i++){
    if(s[i]=='0'){
      res.push_back(i+1);
    }
  }

  cout << res.size() << "\n";
  for(int i=0;i<res.size();i++){
    cout << res[i] << " ";
  }
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
