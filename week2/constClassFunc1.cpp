#include <iostream>
using namespace std;

/* 常量成员函数
 * 在类的成员函数说明后面加const关键字=>常量成员函数
 * 常量成员函数执行期间不应修改其所作用的对象
 * 因此，常量成员函数中不能修改成员变量的值（静态成员变量除外）
 *      也不能调用同类的非常量成员函数（静态成员函数除外）
 */

class Sample {
public:
  int value;
  void GetValue() const;  //常量成员函数
  void func() { };
  Sample() { }
};
void Sample::GetValue() const
{
  //  value=0;  //error
  //  func();  //error
}

int main()
{
  const Sample o;  //常量对象
  //  o.value=100;  //error
  //  o.func();  //error
  o.GetValue();  //常量对象执行常量成员函数
  return 0;
}

