#include<iostream>

using namespace std;

int mainfffffffffffffffff()
{
  int n;
  cin >> n;
  if (n%2 == 0)
  {
    cout << (n * n)/2 << endl;
    cout << (n * n)/2;
  }
  else
  {
    int a = ((n * n)-1)/2 + 1;
    cout << n*n-a << endl;
    cout << a;
  }
  return 0;
}