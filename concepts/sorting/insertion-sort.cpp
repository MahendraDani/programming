// Date : 06.08.2025
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>& v){
  int n = v.size();
  for(int i=1;i<n;i++){
    int curr = v[i];
    int prev = i-1;
    while(prev>=0 && v[prev] > curr){
      v[prev + 1] = v[prev];
      prev--;
    }
    v[prev+1] = curr;
  }
}

int main(){
  vector<int> v{4,1,5,2,3};
  insertionSort(v);

  for(auto x:v){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}
