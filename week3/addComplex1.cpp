#include <iostream>
using namespace std;

class Complex {
public:
  Complex(double r=0.0,double i=0.0)
  {
    real=r;
    imaginary=i;
  }
  double real;
  double imaginary;
};

//运算符重载为【普通函数】，参数个数为【运算符目数】。
Complex operator+ (const Complex & a, const Complex & b)
{
  return Complex(a.real+b.real,a.imaginary+b.imaginary);
  // “类名(参数表)”代表一个对象
}

int main()
{
  Complex a(1,2),b(2,3),c;
  cout<<a.real<<" "<<a.imaginary<<endl;
  cout<<b.real<<" "<<b.imaginary<<endl;
  c=a+b;  //operator+(a,b)
  cout<<c.real<<" "<<c.imaginary<<endl;

  return 0;
}
