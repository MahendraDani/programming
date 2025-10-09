// Date: 09.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
n - number of questions that can be asked in an exam numbered from 1 to n
m - number of lists of questions, that contain n-1 questions each
  - each list is characterized by a[i], which is the only integer not present in the list

Monocarp will receive any one of the m lists, he will pass only if he answers all the questions from the list.
He knows the answer of k questions: q1,q2,q3....qk

Task: For each list, determine if Monocarp will pass the exam or not.
*/
void solve(){
  int n,m,k;
  cin >> n >> m >> k;

  vector<int> a(m);
  for(int i=0;i<m;i++) cin >> a[i];

  vector<int> q(k);
  for(int i=0;i<k;i++) cin >> q[i];
  
  set<int> known;
  for(int i=0;i<k;i++)
    known.insert(q[i]);

  string res;
  for(int i=0;i<m;i++){
    if(known.size()==n){
      res += '1';
    }else if(int(known.size())==n-1 && known.count(a[i])==0){
      res += '1';
    }else{
      res += '0';
    }
  }
  cout << res << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
