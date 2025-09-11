// Date : 11.09.2025
// https://leetcode.com/problems/container-with-most-water/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// max height at start
// second max height from end 
// such that distance between the two is max since area

// Time : O(N^2)
int brute(vector<int>& height){
    int n = height.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans = max(ans,(j-i) * min(height[i],height[j]));
        }
    }
    return ans;
}

// Time :O(N)
// Move from the direction which has less height,
// becuase moving decreases width so it's better to find more height by moving 
// the pointer which is at less height now
int better(vector<int>& height){
    int n = height.size();

    int i=0,j=n-1, ans=0;
    while(i<j){
        int width = j-i;
        int ht = min(height[i],height[j]);
        ans = max(ans, width * ht);

        if(height[i] > height[j]){
            j--;
        }else{
            i++;
        }
    }
    return ans;
}
int maxArea(vector<int>& height) {
    return better(height);
}


int main(){
  return 0;
}