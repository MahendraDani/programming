// Date: 11.10.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int, int>
#define vll vector<long long>

using namespace std;

/*
Case 1: If 1 exists in the array, the answer is always "YES"
Case 2: If 1 doesn't exist? odd even? Prime?

What happens if array conatins a prime number?
a = [7,2,4,8,12] => YES only iff we choose the prime number itself and any other number which divides the rest.

What happens if array conatins two prime numbers?
a = [7,11,2,4,6,8] => YES iff other numbers are multiples of primes

For each array, partition array into two arrays of even and odd based in ascending order
arr = [7,11,2,4,6,8]
even = [2,4,6,8], odd=[7,11]

even[0] should divide all numbers
odd[0] should also divide all numbers
*/

// WA
void solve()
{
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int evenNum = INT_MAX, oddNum = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      evenNum = min(evenNum, a[i]);
    }
    else
    {
      oddNum = min(oddNum, a[i]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (evenNum != INT_MAX && a[i] % 2 == 0)
    {
      if (a[i] % evenNum != 0)
      {
        cout << "NO\n";
        return;
      }
    }

    if (oddNum != INT_MAX && a[i] % 2 != 0)
    {
      if (a[i] % oddNum != 0)
      {
        cout << "NO\n";
        return;
      }
    }
  }

  cout << "YES\n";
}

const int N = 1e5+10;
int a[N];

void better()
{
  int n;
  cin >> n;
  int fl = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    if (a[i] == 1)
      fl = 1;
  }
  if (fl)
    cout << "Yes\n";
  else
  {
    sort(a + 1, a + 1 + n);
    vector<int> b;
    for (int i = 2; i <= n; i++)
    {
      if (a[i] % a[1])
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    n = b.size();
    for (int j = 1; j < n; j++)
    {
      if (b[j] % b[0])
      {
        fl = 1;
        break;
      }
    }
    if (!fl)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    better();
  }
  return 0;
}
