#include <iostream>
using namespace std;

class Base {
public:
  int i;
  virtual void Print() { cout<<"Base::Print"<<endl; } //虚函数表
};

class Derived:public Base {
public:
  int n;
  virtual void Print() { cout<<"Derived::Print"<<endl; } //虚函数表
};

int main()
{
  Derived d;
  cout<<sizeof(int)<<" "<<sizeof(Base)<<","<<sizeof(Derived)<<endl; //4 8,12

  return 0;
}
