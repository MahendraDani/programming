// Date: 10.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Assumption 01:
  - if len(a) is odd and middle-element is same then Bob wins, else Alice


len==odd and middle element same

a => 1 2 3 => 2 3 => 3 Alice wins? a[0]!=b[0] && a[n]==b[n] so Alice removes a[0]
b => 2 1 3 => 2 1 => 1

Q: Keep removing the unmatched element, if no such element exists remove
When playing optimally, Alice tries to remove the unmatched element, Bob tries to remove the matched element


i,j for a
l,m for b
Conditions:
-- a[0]==b[0] && a[n]==b[n] => i++, l++
-- a[0]==b[0] && a[n]!=b[n] => j--, m--
-- a[0]!=b[0] && a[n]==b[n] => i++, l++
-- a[0]!=b[0] && a[n]!=b[n] => i++, l++

-- a[0]==b[n] && a[n]==b[0] => i++, m--
-- a[0]==b[n] && a[n]!=b[0] => j--, l++
-- a[0]!=b[n] && a[n]==b[0] => i++, m--
-- a[0]!=b[n] && a[n]!=b[n] => i++, m--

the not-equal-to ones have more priority
terminating condition? i < j && l < m
*/

// Tutorial
void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++)
    cin >> a[i];

  vector<int> b(n);
  for(int i=0;i<n;i++)
    cin >> b[i];

  if(a==b){
    cout << "Bob\n";
    return;
  }

  reverse(a.begin(),a.end());

  if(a==b){
    cout << "Bob\n";
    return;
  }

  cout << "Alice\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
