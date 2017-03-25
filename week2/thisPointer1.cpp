#include <iostream>
using namespace std;

//this指针作用：指向成员函数所作用的对象

class Complex {
public:
  double real, imag;
  void Print() { cout<<real<<","<<imag<<endl; }
  Complex(double r, double i):real(r),imag(i)
  { }
  Complex AddOne()
  {
    //非静态成员函数中可以直接使用this来代表指向该函数作用的对象的指针
    this->real ++;  //等价于 real++;
    this->Print();  //等价于 Print();
    return *this;
  }
};

int main()
{
  Complex c1(1,1),c2(0,0);
  c1.Print();
  c2.Print();
  cout<<"this before"<<endl;
  c2=c1.AddOne();
  cout<<"this after"<<endl;
  c1.Print();
  c2.Print();

  return 0;
}
