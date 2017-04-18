/*
  C++编译器优先顺序：
  1. 参数完全匹配的普通函数
  2. 参数完全匹配的模板函数
  3. 实参经过自动类型转换能够匹配的普通函数
  4. 报错
*/

#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b)
{
  cout<<"Template Max 1"<<endl;
  return 0;
}

template <class T, class T2>
T Max(T a, T2 b)
{
  cout<<"Template Max 2"<<endl;
  return 0;
}

double Max(double a, double b)
{
  cout<<"MyMax"<<endl;
  return 0;
}

int main()
{
  int i=4,j=5;
  Max(1.2,3.4);
  Max(i,j);
  Max(1.2,3);

  return 0;
}
