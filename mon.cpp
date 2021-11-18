#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  string n, N;
  cin >> n;
  int A[24]= {0};
  int a = 0, b = 0;

  for (int i = 0; i < n.size(); i++)
  {
    A[n[i] - 'a']++;
  }
  for (int i = 0; i < 24; i++)
  {
    if (A[i] > a)
    {
      a = A[i];
      b = 'a' + i;
    }
    else if (A[i] == a && i < b)
    {
      a = A[i];
      b = 'a' + i;
    }
  }
  for(int i = 0; i < n.size(); i++)
  {
    if (n[i] != b)
    {
      N += n[i];
    }
  }

  sort(N.begin(), N.end());

  cout << N;

  return 0;
}