// Date: 08.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Task: find a string that matches one-to-one on the given template array and vice versa
Q. How and in what time can I check if a string is a match?
=> The problem is with duplicates (ai=aj) in template array and strins?


since checking by indices is O(1) => let's try to do it in O(N*N*M), where N is length of arr, and M is no. of strings
*/
// TLE
void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int m;
  cin >> m;

  vector<string> words(m);
  for(int i=0;i<m;i++) cin >> words[i];

  // check for template to strings
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){
        // try to eliminate invalid strings
        for(int k=0;k<m;k++){
          if(words[k].size()==n){
            // are the chars same in string?
            if(words[k][i] != words[k][j]){
              words[k] = "";
            }
          }else{
            // if len is not same, remove
            words[k] = "";
          }
        }
      }
    } 
  }

  // check for strings to template
  for(int i=0;i<m;i++){
    if(words[i].size() == n){
      // check to see if duplicates match
      for(int j=0;j<words[i].size();j++){
        for(int k=j+1;k<words[i].size();k++){
          if(words[i][k]==words[i][j]){
            if(a[j]!=a[k]){
              // does not match in template
              words[i] = "";
            }
          }
        }
      }
    }else{
      words[i]="";
    }
  }

  for(int i=0;i<m;i++){
    if(!words[i].empty()){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }
}


void best() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    int m;
    cin >> m;
    cin.ignore(); // to ignore the newline after m

    for (int i = 0; i < m; ++i) {
        unordered_map<char, int> m_1;
        unordered_map<int, char> m_2;
        string s;
        getline(cin, s);

        if ((int)s.size() != n) {
            cout << "NO\n";
            continue;
        }

        bool ok = true;
        for (int j = 0; j < n; ++j) {
            char sc = s[j];
            int av = a[j];
            if (m_1.find(sc) == m_1.end() && m_2.find(av) == m_2.end()) {
                m_1[sc] = av;
                m_2[av] = sc;
            } else if ((m_1.count(sc) && m_1[sc] != av) || (m_2.count(av) && m_2[av] != sc)) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    best();
  }
  return 0;
}

