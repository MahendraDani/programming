// Date: 20.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
x = 5(odd) => x = 3*5 + 1 = 16 (even)
odd number => x = 3*x + 1 => even
even number => x = x/2 => may be even may be odd
*/
void solve(){
  int k,x;
  cin >> k >> x;

  while(k>0){
    if(x%2==0){
      if((x/2)!=0 && (x/2)%2==0){
        x *= 2;
      }else{
        // init value was odd
        x = (x-1)/3;
      }
    }else{
      x *= 2;
    }
    k--;
  }
  cout << x << "\n";
}

void editorial(){
  int n,k;
  cin >> n >> k;

  cout << (k<<n) << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    editorial();
  }
  return 0;

}
