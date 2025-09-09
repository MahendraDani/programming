// https://leetcode.com/problems/longest-common-prefix/description/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int minSize = INT_MAX;
    for(int i=0;i<strs.size();i++){
        minSize = min(minSize,(int)strs[i].size());
    }

    string ans;
    for(int i=0;i<minSize;i++){ // check each index for each string
        char c = '$';
        bool good = true;
        for(int j=0;j<strs.size();j++){
            string curr = strs[j];
            if(c == '$'){
                c = curr[i];
            }else {
                if(c!=curr[i]){
                    good = false;
                    break;
                }
            }
        }
        if(good){
            ans += c;
        }else{
            break;
        }
    }
    return ans;
}


string longestCommonPrefix(vector<string>& strs) {
    int minSize = INT_MAX;
    string minStr;
    for(int i=0;i<strs.size();i++){
        if(strs[i].size() < minSize){
            minSize = strs[i].size();
            minStr = strs[i];
        }
    }
    
    for(int idx = 0; idx < minStr.size();idx++){
        // find substring from 0 to idx in each of strings in vectors
        for(auto curr : strs){
            if(curr.find(minStr.substr(0,idx+1))!=0){
                return idx == 0 ? "" : minStr.substr(0,idx);
            }
        }
    }
    return minStr;
}

int main(){
  return 0;
}
