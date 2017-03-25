#include <iostream>
using namespace std;

int Max(int a, int b)
{
  return a > b ? a : b;
}

inline int inlineMax(int a, int b)
{
  return a > b ? a : b;
}

int Operation(int a, int b)
{
  int tmp;
  tmp=a+b;
  tmp=a-b;
  tmp=a*b;
  tmp=a*a;
  tmp=b*b;
  tmp=a*a+b*b;
  return tmp;
}

int inlineOperation(int a, int b)
{
  int tmp;
  tmp=a+b;
  tmp=a-b;
  tmp=a*b;
  tmp=a*a;
  tmp=b*b;
  tmp=a*a+b*b;
  return tmp;
}

int main()
{
  int x=3;
  int y=4;
  //cout<<Max(x,y)<<endl;
  //cout<<inlineMax(x,y)<<endl; //cout<<(x > y ? x : y)<<endl;
  /*
  for (int i=0;i<999999;i++)
    cout<<Max(x,y)<<endl;
    cout<<inlineMax(x,y)<<endl;
  */
    for (int i=0;i<999999;i++)
      //    cout<<Operation(x,y)<<endl;
        cout<<inlineOperation(x,y)<<endl;

  return 0;
}
