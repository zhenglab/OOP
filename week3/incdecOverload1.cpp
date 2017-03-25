#include <iostream>
using namespace std;
#include "incdecOverload1.h"

/*
 * 前置运算符 ++i/--i 一元运算符
 *  ++obj, obj.operator++(), operator++(obj)
 * 后置运算符 i++/i-- 二元运算符
 *  obj++, obj.operator++(0), operator++(obj,0)
 */

int main()
{
  CDemo d(5);
  cout<<(d++)<<",";  //d.operator++(0);
  cout<<d<<",";
  cout<<(++d)<<",";  //d.operator++();
  cout<<d<<endl;
  cout<<(d--)<<",";  //d.operator--(0);
  cout<<d<<",";
  cout<<(--d)<<",";  //d.operator--();
  cout<<d<<endl;

  return 0;
}
