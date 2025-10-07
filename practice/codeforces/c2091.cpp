#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;
/*
Need to find a permutation from 1 to n such that at every cyclic shift, only 1 element is at it's valid position.
What is valid position?
In comparison between our permutation and arrangement of numbers from 1 to n, only ONE element should match.

Q1. How to find such permutation?
Q2. Does there exists more than one permutation for any n value?
Q3. In which case, no such permutation can be found?

Let's see, what happens in a cyclic shift for an arbitary permutation:
a = [1 3 4 5 2] =>  b = [2 1 3 4 5]
=> b1 = an
=> bi = ai-1, for n=1 to n-1

and now we want that for each bi only one should match with sequence 1,2,3...n
*/
void solve(){
  int n;
  cin >> n;

  if(n%2==0){
    cout << -1 << "\n";
    return;
  }

  int k = n/2;
  while(k>=1){
    cout << k << " ";
    k--;
  }
  
  int cnt = 0;
  k = n;
  while(cnt<=n/2){
    cout << k << " ";
    k--;
    cnt++;
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
