#include <iostream>
using namespace std;

class Base {
public:
  void fun1() { fun2(); } //在非构造函数、非析构函数的成员函数中调用虚函数，是多态！
  virtual void fun2() { cout<<"Base::fun2()"<<endl; }
};

class Derived:public Base {
public:
  virtual void fun2() { cout<<"Derived::fun2()"<<endl; }
};

int main()
{
  Derived d;
  Base * pBase = &d;
  pBase->fun1();

  return 0;
}
