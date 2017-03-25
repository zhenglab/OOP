#include <iostream>
using namespace std;

int func(int x1, int x2=2, int x3=3)
{
  return x1+x2+x3;
}

int main()
{
  cout<<func(10)<<endl;
  cout<<func(10,8)<<endl;
  //  cout<<func(10,,8)<<endl;

  return 0;
}
