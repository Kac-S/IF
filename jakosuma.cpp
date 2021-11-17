#include<iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long int foo(long long int n)
{
  if(n == 1||n==0) return 1;
  else
  {
    // int out = 0;
    // for(int i = (n-1);i>=0;i--)
    // {  
    //   out+=foo(i);
    // }
    // return out;
    return foo(n-1)+foo(n-1);
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  auto start = high_resolution_clock::now();

  long long int n; cin>>n;

  cout<<foo(n);


  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by function: "
        << duration.count() << " microseconds" << endl;
  return 0;
}