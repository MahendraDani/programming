// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// move in the direction of neighbour which is greater than mid
// can mid - 1 and mid + 1 be ever out of bounds? If no? how can I prove?
int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int ans = -1;
    int left = 1, right = n-2;

    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1]){
            ans = mid;
            break;
        }else if(arr[mid] < arr[mid + 1]){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return ans;
}

int main(){
  return 0;
}