// https://leetcode.com/problems/valid-anagram/description/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Time : O(N) + O(26) => O(N)
// Space : O(26) + O(26)
bool isAnagram(string s, string t){
  if(s.size() != t.size()) return false;

  vector<int> sfreq(26), tfreq(26);
  for(int i=0;i<s.size();i++){
    sfreq[s[i]-'a']++;
    tfreq[t[i]-'a']++;
  }

  for(int i=0;i<26;i++){
    if(sfreq[i]!=tfreq[i]){
      return false;
    }
  }
  return true;
}

// Time : O(N)
// Space : O(26)
bool better(string s, string t){
  if(s.size()!=t.size()) return false;

  vector<int> sfreq(26);
  for(int i=0;i<s.size();i++){
    sfreq[s[i]-'a']++;
  }

  for(int i=0;i<t.size();i++){
    sfreq[t[i]-'a']--;
    if(sfreq[t[i]-'a'] < 0){
      return false;
    }
  }
  return true;
}

int main(){
  return 0;
}
