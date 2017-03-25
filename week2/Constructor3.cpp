#include <iostream>
using namespace std;

class Complex {
private:
  double real,imag;
public:
  void Set(double r, double i);
  //可以有多个构造函数，参数个数或类型不同（重载）
  Complex(double r);
  Complex(double r, double i);
  Complex(Complex c1, Complex c2);
};

Complex::Complex(double r)
{
  cout<<"Complex constructor 1"<<endl;
  real=r;imag=0;
  cout<<"real="<<real<<"  "<<"imag="<<imag<<endl<<endl;
}

Complex::Complex(double r, double i)
{
  cout<<"Complex constructor 2"<<endl;
  real=r;imag=i;
  cout<<"real="<<real<<"  "<<"imag="<<imag<<endl<<endl;
}

Complex::Complex(Complex c1, Complex c2)
{
  cout<<"Complex constructor 3"<<endl;
  real=c1.real+c2.real;
  imag=c1.imag+c2.imag;
  cout<<"real="<<real<<"  "<<"imag="<<imag<<endl<<endl;
}

int main()
{
  Complex c1(3);
  Complex c2(1,2);
  Complex (c1,c2);

  return 0;
}
