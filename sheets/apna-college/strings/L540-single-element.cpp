// https://leetcode.com/problems single-element-in-a-sorted-array/description/
#include <iostream>
#include <bits/stdc++.h>

  // ans : arr[mid] != arr[mid-1] && arr[mid]!=arr[mid+1]
  // 1st and last position are possible for answer
  // when to go right? when to go left?
int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    int left = 0, right = n-1;

    while(left < right){
        int mid = left + (right-left)/2;
        bool isEven = (right-mid)%2==0;

        if(arr[mid]==arr[mid+1]){
            if(isEven){
                left = mid + 2;
            }else{
                right = mid - 1;
            }
        }else{
            if(isEven){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
    }  
    return arr[right];
}

int main(){
  return 0;
}