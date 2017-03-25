#include <iostream>
using namespace std;

class A {
  int i;
public:
  void Hello() { cout<<"hello"<<endl; }
  // => void Hello(A * this) { cout<<"hello"<<endl; }
  //void Hello() { cout<<i<<"hello"<<endl; }
  // => void Hello(A * this) {cout<<this->i<<"hello"<<endl; }
};

int main()
{
  A * p = NULL;
  p->Hello();
  // => Hello(p);

  return 0;
}
/* this指针和静态成员函数
 * 静态成员函数中不能使用this指针！
 * 因为静态成员函数并不具体作用于某个对象！
 * 因此静态成员函数的真实参数个数就是程序中写出的参数个数！
 */
