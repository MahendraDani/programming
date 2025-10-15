// Date: 15.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
n=6, arr=[2,3,6,4,5,1]
=> [2,3,6,4,1]
=> [2,3,4,1]
=> [2,3,1]
=> [2,1]

n=7
2 3 7 4 5 6 1
=> 2 3 7 4 5 1
=> 2 3 7 4 1
=> 2 3 4 1
=> 2 3 1
=> 2 1

Assumption: p2, p3, pn, p4, p5, .... pn-1, p1, sequence will have maximum score
n=6, arr=[2,3,6,4,5,1]
=> 2 3 6 4 1
=> 2 3 4 1
=> 2 3 1
=> 2 1

n=10, arr=[2,3,10,4,5,6,7,8,9,1]
=> 2 3 10 4 5 6 7 8 1
yes works
*/
void solve(){
  int n;
  cin >> n;

  cout << "2 3 ";
  
  if(n>3){
    cout << n << " ";
  }

  for(int i=4;i<=n-1;i++){
    cout << i << " ";
  }

  cout << 1 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
