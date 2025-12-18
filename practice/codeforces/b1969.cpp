// Date: 18.12.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int, int>
#define vll vector<long long>

using namespace std;

void solve()
{
  string s;
  cin >> s;

  long long ones = 0;
  long long ans = 0;

  for (char c : s)
  {
    if (c == '1')
    {
      ones++;
    }
    else
    { // c == '0'
      if (ones > 0)
      {
        ans += ones + 1;
      }
    }
  }

  cout << ans << '\n';
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
