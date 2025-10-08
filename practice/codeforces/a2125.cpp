// Date: 08.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Task: Remove all instances of "FFT" and "NTT"
Assumption 1: Swapping first F and last T will be always good in FFT: FFT => TFF
Assumption 2: Swapping first N with last T will be always good in NTT: NTT => TTN

1. FFTFFT => TFFTFF fails
2. FFTNTT => TFFTTN fails
3. NTTFFT => TTNTFF works
4. NTTNTT => TTNTTN fails

Assumption 3: Insert a new alphabet in between FXFT and NXTT, but what if the string does not contain any?

Assumption 4: FFT => FTF
Assumption 5 : NTT => TNT
FFTNTT => FTFTNT works

there are 4 cases I need to verify
1. FFTFFT => FTFFTF (4) fails
2. FFTNTT => FTFTNT works
3. NTTFFT => TNTFTF works
4. NTTNTT => TNTTNT (4) fails


Approach:
- Count number of T, N and F

Arrange all Ts first, then all Ns, then all Fs, them remaining chars
*/
void solve(){
  string s;
  cin >> s;

  vector<int> hash(26,0);
  for(auto ch: s){
    hash[ch-'A']++;
  }
  string res;
  // T => 19, F => 5, N = 13
  while(hash['T'-'A']>0){
    res += 'T';
    hash['T'-'A']--;
  }

  while(hash['F'-'A']>0){
    res += 'F';
    hash['F'-'A']--; 
  }

  while(hash['N'-'A']>0){
    res += 'N';
    hash['N'-'A']--;
  }

  for(int i=0;i<26;i++){
    while(hash[i]>0){
      res += char(i + 'A');
      hash[i]--;
    }
  }

  cout << res << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
