// Date: 14.10.2025
// Permutations 
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
- when n is even
n = 4 => 1 4 2 _ NOT possible
n = 6 => 1 5 2 6 4 _ NOT possible

n = 8
=> 8 6 4 2 7 5 3 1

n = 6
=> 6 4 2 5 3 1

n = 4
=> 4 2 3 1

for n is even => NO SOLUTION

- when n is odd
n = 3 => no
n = 5 => 4 2 5 3 1

put all even numbers in dec order, then put all odd numbers in dec order
*/
void solve(){
  int n;
  cin >> n;

  if(n==3 || n==2){
    cout << "NO SOLUTION\n";
    return;
  }

  if(n==4){
    cout << "2 4 1 3\n";
    return;
  }

  vector<int> res;
  int k = n%2==0 ? n : n-1;
  int m = n%2==0 ? n-1 : n;
  while(k>0){
    res.push_back(k);
    k-=2;
  }

  while(m>0){
    res.push_back(m);
    m-=2;
  }

  for (auto elem: res){
    cout << elem << " ";
  }
  cout << "\n";
}

int main(){
  solve();
  return 0;
}
