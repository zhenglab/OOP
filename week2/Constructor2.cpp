#include <iostream>
using namespace std;

class Complex {
private:
  double real,imag;
public:
  Complex(double r, double i=0);
};

Complex::Complex(double r, double i)
{
  cout<<"Complex constructor"<<endl;
  real=r; imag=i;
  cout<<"real="<<real<<"  "<<"imag="<<imag<<endl<<endl;
}

//Complex c(7);

int main()
{
  //  Complex c1;  //缺少构造函数的参数
  //  Complex * p1 = new Complex;  //没有参数
  Complex c1(2);
  Complex c2(2,4),c3(3,5);
  Complex * p2 = new Complex(3,4);

  return 0;
}
