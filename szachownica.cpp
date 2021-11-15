#include<iostream>

using namespace std;

int main()
{
  int n, x;
  cin >> n;
  x = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (x == 1)
      {
        x = 0;
      }
      else
      {
        x = 1;
      }
      cout << x;
    }
    cout << endl;
  }
  return 0;
}