#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
1. find the distinct elements used in current window?
2. freq of each element in the window?
3. int to char conversion, idx = 3 => char = d  :=> char(idx + 'a');
 */
void solve(){
  int n,a,b;
  cin >> n >> a >> b;

  vector<int> v(26,0);
  
  string ans;
  // first window
  for(int i=0;i<a;i++){
    if(i<b){
      ans += (char)(i + 'a');
      v[i]++;
    }else{
      ans += 'a';
      v[0]++;

    }
  }
  
  int i = a;
  while(ans.size() < n){
    // remove the freq of last element
    v[ans[i-a]-'a']--;

    if(v[ans[i-a]-'a']==0){
      ans += ans[i-a];
      v[ans[i-a]-'a']++;
    }else{
      ans += 'a';
      v[0]++;
    }
    i++;
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
