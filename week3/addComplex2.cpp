#include <iostream>
using namespace std;

class Complex {
public:
  Complex(double r=0.0,double i=0.0):
    real(r),imaginary(i) { }  //constructor
  Complex operator+ (const Complex &);  //addition
  Complex operator- (const Complex &);  //subtraction
  double real;
  double imaginary;
};

//运算符重载为【成员函数】，参数个数为【运算符目数减一】。
Complex Complex::operator+ (const Complex & operand2)
{
  return Complex(real+operand2.real,imaginary+operand2.imaginary);
  // “类名(参数表)”代表一个对象
}
Complex Complex::operator- (const Complex & operand2)
{
  return Complex(real-operand2.real,imaginary-operand2.imaginary);
}

int main()
{
  Complex a(1,2),b(2,3),c,d;
  cout<<a.real<<" "<<a.imaginary<<endl;
  cout<<b.real<<" "<<b.imaginary<<endl;
  c=a+b;  //a.operator+(b)
  cout<<c.real<<" "<<c.imaginary<<endl;
  d=a-b;  //a.operator-(b)
  cout<<d.real<<" "<<d.imaginary<<endl;

  return 0;
}
