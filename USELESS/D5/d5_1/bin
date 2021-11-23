#include<iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int l = 1;
  int p = 1000;
  int n; cin>>n; 

  while(l<p)
  {
    int sr = (l+p) / 2;
    cout<<sr<<"\n";
    if(n<sr)
    { 
      p = sr;
    }
    else if (n>sr)
    {
      l = sr;
    }
    else
    {
      break;
    }

  }

  cout<<n;

  return 0;
}