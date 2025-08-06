// Date : 11.07.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Questions?
1. How can I calucate the cost of any string s, in one pass?
let s = 100101 => cost(s) = 11
| last | curr | cost |
| 0    |  0   |  1   |
| 0    |  1   |  2   |
| 1    |  1   |  1   |
| 1    |  0   |  2   |

2. How to decide whether to reverse a substring? If yes, how to decide exactly which subtring to reverse? Before that,
how does reversing a subtring differ the cost from not reversing?
*/
int M = 1e9;
void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  int l1=M, l2=M, r1=-M, r2=-M;
  int cost = (s[0] - '0') == 0 ? 1 : 2;
  int prev = (s[0] - '0');

  for(int i=1;i<=n-1;i++){
    if((s[i-1]-'0')^(s[i]-'0')==1 && s[i]=='1'){
      l1 = min(l1,i);
      r1 = max(r1,i);
    }

    if((s[i-1]-'0')^(s[i]-'0')==1 && s[i]=='0'){
      l2 = min(l2,i);
      r2 = max(r2,i);
    }

    if(prev^(s[i]-'0')==1){
      cost += 2;
    }else{
      cost += 1;
    }
    prev = (s[i]-'0');
  }
  
  bool toreverse = false;
  if(l1!=M && r1!=-M && l1!=r1 && abs(r1-l1)!=1){
    toreverse = true;
  }

  if(l2!=M && r2!=-M && l2!=r2 && abs(r2-l2)!=1){
    toreverse = true;
  }

  if(toreverse){
    cost -= 2;
  }else{
    // rev entire string
    if(s[0]=='1' && s[n-1]=='0'){
      cost--;
    }
  }
  cout << cost << "\n";
}

void optimal(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  s = "0" + s;
  int ans = 0, curr = s[0];
  for(int i=1;i<=n;i++){
    int dig = s[i];
    if(curr != s[i]){
      // switch
      ans++;
    }
    curr = dig;
  }

  if(ans >= 3){
    cout << ans - 2 + n << "\n";
  }else if(ans ==2){
    cout << ans - 1 + n << "\n";
  }else{
    cout << ans + n << "\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    optimal();
  }
  return 0;
}
