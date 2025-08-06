// Date : 06.08.2025
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
1. IS STABLE?
No,
finding min element in each iteration 
and swapping it can break relative order of elements

2. TIME
O(N^2) - in all cases
*/
void selectionSort(vector<int>& v){
  int n = v.size();
  for(int i=0;i<n-1;i++){
    int minIdx = i;
    for(int j=i+1;j<n;j++){
      if(v[i] < v[minIdx]){
        minIdx = i;
      }
    }
    swap(v[i],v[minIdx]);
  }
}

int main(){
  vector<int> v{1,7,5,4,3,6,8};
  selectionSort(v);

  for(auto x: v){
    cout << x << " ";
  }
  return 0;
}

