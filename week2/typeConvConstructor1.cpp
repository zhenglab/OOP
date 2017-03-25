#include <iostream>
using namespace std;

class Complex {
public:
  double real,imag;
  Complex(int i)  //类型转换构造函数：只有一个参数、不是复制构造函数
  {
    cout<<"IntConstructor called"<<endl;
    real=i;
    imag=0;
  }
  Complex(double r, double i)
  {
    cout<<"Constructor called"<<endl;
    real=r;
    imag=i;
  }
};

int main()
{
  Complex c1(7,8);  //c1(4)
  cout<<c1.real<<"  "<<c1.imag<<endl;
  Complex c2=12;  //初始化 不生成临时对象
  c1=9;  //9被自动转换成一个临时Complex对象
  cout<<c1.real<<"  "<<c1.imag<<endl;
  cout<<c2.real<<"  "<<c2.imag<<endl;

  return 0;
}
    
