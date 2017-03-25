#include <iostream>
#include "CArray.h"
using namespace std;

//可变长整型数组类
int main()
{
  CArray a;
  for(int i=0;i<5;++i)
    a.push_back(i);  //要用动态分配的内存来存放数组元素（指针成员变量）
  CArray a2,a3;
  a2=a;  //赋值运算符重载
  for(int i=0;i<a.length();++i)
    cout<<a2[i]<<" ";  //[]运算符重载
  cout<<endl;
  a[3]=100;
  CArray a4(a);  //复制构造函数
  for(int i=0;i<a4.length();++i)
    cout<<a4[i]<<" ";
  return 0;
}
