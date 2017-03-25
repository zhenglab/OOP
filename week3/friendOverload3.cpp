#include <iostream>
using namespace std;

/* 运算符重载
 *  【成员函数】不能满足使用要求
 *  【普通函数】不能访问类的私有成员
 *  【友元函数】
 */

class Complex {
  double real,imag;
public:
  Complex(double r=0, double i=0): real(r), imag(i) { };
  Complex operator+(double r);
  friend Complex operator+(double r, const Complex & c);
};

Complex Complex::operator+(double r)
{
  return Complex(real+r,imag);
}

Complex operator+(double r, const Complex & c)
{
  return Complex(c.real+r,c.imag);
}

int main()
{
  Complex c;
  c=c+5;  // c=c.operator+(5);
  c=5+c;

  return 0;
}
