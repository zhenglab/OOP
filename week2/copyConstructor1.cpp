#include <iostream>
using namespace std;

class Complex {
private:
  double real,imag;
};

int main()
{
  Complex c1;  //调用缺省无参构造函数
  Complex c2(c1);  //调用缺省复制构造函数：将c2初始化成和c1一样

  return 0;
}
