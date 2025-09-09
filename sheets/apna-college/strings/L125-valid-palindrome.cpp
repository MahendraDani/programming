// https://leetcode.com/problems/valid-palindrome/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
A string is palindrome if ith and (n-i)th chars are same
*/
bool checkPalindrome(string s){
  int left = 0, right = s.size()-1;
  while(left <= right){
    if(s[left]!=s[right]){
      return false;
    }
    left++;
    right--;
  }
  return true;
}

bool validPalindrome(string s){
  string snew = "";
  for(int i=0;i<s.size();i++){
    if(islower(s[i])){
      snew += s[i];
    }else if(isupper(s[i])){
      snew += tolower(s[i]);
    }else if(s[i]-'0'>= 0 && s[i]-'0'<=9){
      snew += s[i];
    }
  }

  return checkPalindrome(snew);
}

// Follow up : How to check if a string is palindrome using recursion?
bool check(string s, int i){
  if(i <= s.size()-1-i){
    return s[i] == s[s.size()-1-i] && check(s,i+1);
  }
  return true;
}

bool check2(string s, int start, int end){
  if(start >= end) return true;

  if(s[start]!=s[end]) return false;
  return check2(s,start+1,end-1);
}

int main(){

  string s;
  cin >> s;

  cout << (check(s,0) ? "YES" : "NO")<< "\n";
  return 0;
}
