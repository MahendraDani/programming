// https://leetcode.com/problems/subarray-sum-equals-k/
// Date : 10.09.2025

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Time => O(N^2)
int brute(vector<int>& arr, int k) {
    int n = arr.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum==k) ans++;
        }
    }
    return ans;
}

int better(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> pref(n);
    pref[0] = arr[0];

    for(int i=1;i<n;i++){
        pref[i] = arr[i] + pref[i-1];
    }

    map<int,int> mp;
    int ans = 0;

    for(int i=0;i<n;i++){
        if(pref[i]==k) ans++;

        if(mp.find(pref[i]-k)!=mp.end()){
            ans += mp[pref[i]-k];
        }

        mp[pref[i]]++;
    }
    return ans;g
}

int main(){
  return 0;
}
