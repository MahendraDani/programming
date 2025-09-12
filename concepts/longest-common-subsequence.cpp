// Longest common subsequence
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Only recursive
// Time : O(2^(m+n))
int lcs(string a, string b, int i, int j){
  if(i==a.size() || j==b.size()) return 0;

  if(a[i]==b[j]){
    return 1 + lcs(a,b,i+1,j+1);
  }

  return max(lcs(a,b,i+1,j), lcs(a,b,i,j+1));
}

int main(){
  return 0;
}
