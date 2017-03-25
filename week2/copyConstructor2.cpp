#include <iostream>
using namespace std;

class Complex {
public:
  double real,imag;
  Complex()
  {
    cout<<"Constructor called"<<endl;
  }
  Complex(const Complex & c)  //Complex(const Complex c)
  {
    real=c.real;
    imag=c.imag;
    cout<<"Copy Constructor called"<<endl;
  }
};

int main()
{
  Complex c1;  //调用构造函数
  //复制构造函数起作用情况一：用一个对象去初始化同类的另一个对象
  Complex c2(c1);  //调用复制构造函数
  Complex c3=c1;  //初始化语句 非赋值语句

  return 0;
}
