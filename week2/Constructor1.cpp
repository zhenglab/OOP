#include <iostream>
using namespace std;

class Complex {
private:
  double real,imag;
public:
  void Set(double r, double i);
};  //编译器自动生成默认构造函数

int main()
{
  Complex c1;  //默认构造函数被调用
  Complex * pc = new Complex;  //默认构造函数被调用
  return 0;
}
