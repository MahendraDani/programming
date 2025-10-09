// Date: 09.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Problem spec:
Gear: rotating part, which has teeth that join with those of other gears to rotate.
- the first gear is rotated at speed 1 revolution per second(rps).
- For any other gear, 
  - x: number of teeth of the gear
  - y: number of teeth of the gear to it's left
  - z: speed of the gear to its left.
  - Then, speed of this gear will be (y/x)*z rps.

Task: Is it possible to arrange the gears such that, the speed of the rightmost gear is 1 rps?

Example:
Ex1.
3 3 6 6
2nd: 3/3 * 1 = 1
3rd: 3/6 * 1 = 1/2
4th: 6/6 * 1/2 = 1/2 hence, not a valid arrangement.

Ex2.
3 6 3 6
2nd: 3/6 * 1 = 1/2
3rd: 6/3 * 1/2 = 1
4th: 3/6 * 1 = 1/2 not valid

Ex3.
6 6 3 3
2nd: 6/6 * 1 = 1
3rd: 6/3 * 1 = 2
4th: 3/3 * 2 = 2 not valid

Ex4. 
6 3 6 9
2nd: 6/3 * 1 = 2
3rd: 3/6 * 2 = 1
4th: 6/9 * 1 = 2/3 not valid

Ex5.
6 3 9 6
2nd: 6/3 * 1 = 2
3rd: 3/9 * 2 = 2/3
4th: 9/6 * 2/3 = 1 valid

Q: What is the difference between Ex4 and Ex5? Why arrangement in Ex4 is not valid and that in Ex5 is valid? Can I attribute it
to any characteristic or property or observation?
- At any ith gear, let speed of it's left be v[i-1], then I only need teeths, g[i-1] and g[i] to measure it's speed.
- At every iteration, the speed changes, i.e v[i-1] changes
- How can I make sure that by the end v[i-1] == 1 ?
- The speed of 2nd gear v[1], matters on g[1]/g[0] and that's the one I can control, becuase prior to it speed was 1.
 
From Ex5: adjacent pairs: (6,3)=> LCM=6, HCF=3, (3,9)=>LCM=9,HCF=3, (9,6)=>LCM=18, HCF=3

Assumption 01: In an ideal arrangement g1,g2,g3,....gn, for any pair (g[k],g[k+1]), 
  - LCM(g[k],g[k+1]) = 2 * LCM(g[k-1],g[k])

Example: 2 3 12 24
LCM(2,3) = 6, HCF=1
LCM(3,12) = 12, HCF=3
LCM(12,24)=24, HCF=12

is it valid sequence?
2nd: 2/3 * 1 = 2/3
3rd: 3/12 * 2/3 = 1/6
4th: 12/24 * 1/6 = 1/12 (not valid)

But what if I arrange g[k],g[k+1] such that g[k] > g[k+1]?
3 2 12 8
2nd: 3/2 * 1 = 3/2
3rd: 2/12 * 3/2 = 1/4
4th: 12/8 * 1/4 = 1/2 (not valid)

So, Assumption is wrong!

Cases in which answer is YES:
- Case 01: All numbers are same

Assumption 02: The minimum element in the array should be the GCD of all elements.
Assumption 03: After diving the array by this GCD, there should be atmost three distinct numbers 1, a, and b, then move all ones to the begining and arrange a,b,a,b,a... so on for valid arrangement

*/

// Had to read tutorial
void solve(){
  int n;
  cin >> n;

  vector<int> gears(n);
  for(int i=0;i<n;i++) cin >> gears[i];

  set<int> seen;

  for(auto gear: gears){
    if(seen.count(gear)){
      cout << "YES\n";
      return;
    }
    seen.insert(gear);
  }

  cout << "NO\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }

}
