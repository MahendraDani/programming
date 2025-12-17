// Date: 17.12.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
a = 4, 3, 10, 5
=> [4,3], [10,5], maxDiff = max(1,5) = 5
=> [4,10], [3,5], maxDiff = max(6,2) = 6
=> [4,5], [3,10], maxDiff = max(1,7) = 7
=> then minDiffOverall = min(5,6,7) = 5


hypothesis => pair large elements together

algorithm=>
1. sort numbers in asc order
2. pair adj elements
3. max of diff of all pairs is the answer

3 8 9 3 3 2
=> sort: 2, 3, 3, 8, 9
=> pairs => (2,3) , (3,3), (8,9)
=> minDiff = min(1,0,1) = 1

Question: What happens when negative numbers are also included?
a = 4, 3, 10, -5
=> [4,3], [10,-5], maxDiff = max(1, 15) = 15
  => [4,3], [-5,10], maxDiff = max(1,15) = 15
=> [4,10], [3,-5], maxDiff = max(6,8) = 8
=> [4,-5], [3,10], maxDiff = max(9,7) = 9
=> ans = min(8,9,15) = 8

-x - -y == y - x
-x - y == - (x+y) => against our favoured case
x - y 
x - (-y) = x + y

pair all negatives together and pair all positives together
*/
void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  sort(a.begin(), a.end());
  int ans = INT_MIN;

  for(int i=1;i<n;i+=2){
    ans = max(ans, abs(a[i-1] - a[i]));
  }

  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
