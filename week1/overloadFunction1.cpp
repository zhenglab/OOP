#include <iostream>
using namespace std;

//函数重载
int Max(int n1, int n2)
{
  return n1 > n2 ? n1 : n2;
}

int Max(int n1, int n2, int n3)
{
  int tmp;
  tmp = n1 > n2 ? n1 : n2;
  return tmp > n3 ? tmp : n3;
}
        
double Max(double f1, double f2)
{
  return f1 > f2 ? f1 : f2;
}

//重复定义
/*
double Max(int n1, int n2)
{
  return n1 > n2 ? n1 : n2;
}
*/

int main()
{
  cout<<Max(3.4,2.5)<<endl;
  cout<<Max(2,4)<<endl;
  cout<<Max(1,2,3)<<endl;
  //  cout<<Max(3,2.4)<<endl;

  return 0;
}
