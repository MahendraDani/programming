// Date: 14.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
string | right-shift | left-shift |
------------------------------------
000    | 000         | 000        |
001    | 100         | 010        |
010    | 001         | 100        |

ans so on

Case 1: string with 0 1s => 0 ops require
000 => 0 ops

Case 2: string with 1 one
001 => 0 ops
010 => 1 ops (right)
100 => 1 ops (left)

Case 3: string with 2 ones
011 => 0 ops
110 => 1 ops (right)
101 => 1 ops (left)

Case 4: with 3 ones
111
- first sort all triplets
- then arrange all sorted triplets?

110100
i=1,j=2,k=5 (right shift) => 010110
i=2,j=5,k=6 (right shift) => 000111
done in 2 ops?

How?

Assumption:2 zeroes together will need 2 ops

101011

count number of zeroes, only those out of position need to cycled
  - 1 op cycles only one zero
*/
void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  int cnt = 0;
  for (auto ch: s){
    if(ch=='0'){
  //    cout << ch << " ";
      cnt++;
    }
  }

  int present = 0;
  for(int i=0;i<cnt;i++){
    if(s[i]=='0'){
      present++;
    }
  }

  // cout << "cnt: " << cnt << "\n";
  // cout << "present: " << present << "\n";
  cout << cnt - present << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
