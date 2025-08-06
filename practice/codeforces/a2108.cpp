#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;
/*
Permutations of length 4
[1,2,3,4] => 0
[1,2,4,3] => 0 + 0 + 1 + 1 = 2
[1,3,2,4] => 0 + 1 + 1 + 0 = 2
[1,3,4,2] => 0 + 1 + 1 + 2 = 4
[1,4,2,3] => 0 + 2 + 1 + 1 = 4
[1,4,3,2] => 0 + 2 + 0 + 2 = 4
...
[4,3,2,1] => 3 + 1 + 1 + 3 = 8

Arugment : The function can take values only from the set {0,2,4,6,8,....}
Q : How can I determine which permutation how many values based on n?
Guess : Sort the array in reverse order and compute f(p) for it, the based on it return it's position from the above set

[8,7,6,5,4,3,2,1] => 7 + 5 + 3 + 1 + 1 + 3 + 5 + 7 = 32
a=0, d=2, an= 32, then n=?
32 = 0 + (n-1)*2 => 16 = n-1 => n=17

// 1, 3,5,7,.....(2*n-1)
*/
void solve(){
  int n;
  cin >> n;

  int an = 0;
  
  int i=0;
  while(n>0){
    an += abs(n-i);
    i++;
    n--;
  }

  cout << an/2 + 1 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
