// Date : 06.08.2025
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
1. NUMBER OF SWAPS
For size n, the number of comparisons : 
(n-1) + (n-2) + .... 1 = n * (n-1)/2

in worst case each comparision requires a swap,
number of swaps in worst case = n*(n-1)/2

2. IS STABLE SORTING ALGORITHM? 
Yes,
When it compares adjacent elements, it only swaps if the left one is greater than the right.

It does not swap equal elements.

3. TIME
Worst case ({7,6,5,4}) => O(N^2)
Best case ({1,2,3,4}) => O(N^2)
Average case => O(N^2)
*/
void bubbleSort(vector<int>& v){
  int n = v.size();
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      if(v[j] > v[j+1]){
        swap(v[j],v[j+1]);
      }
    }
  }
}

int main(){
  vector<int> v{1,7,5,4,3,6,8};
  bubbleSort(v);
  for(auto x: v){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}
