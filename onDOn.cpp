#include<iostream>

using namespace std;

int f (int a, int yeet)
{
  if(a>0)
  {
    a--;
    for(int i = 0;i<n;i++)
    {
      yeet++;
      yeet = f(a,yeet);
    }
    return yeet;
  }
}

int main()
{
  int n;
  cin >>n;  
  y = f(n,0);
  cout<<y;
}
// n = int(input())
// a = n
// def pentla (a,yeet):
//    if a > 0:
//        a -= 1
//        for i in range(n):
//            yeet += 1
//            yeet = pentla(a,yeet)
//    return yeet
 
// y = pentla(a,0)
// print(y)