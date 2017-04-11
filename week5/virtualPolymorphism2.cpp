#include <iostream>
using namespace std;

class A {
public:
  virtual void Print()
  {
    cout<<"A::Print"<<endl;
  }
};

class B:public A {
public:
  virtual void Print()
  {
    cout<<"B::Print"<<endl;
  }
};

class D:public A {
public:
  virtual void Print()
  {
    cout<<"D::Print"<<endl;
  }
};

class E:public B {
  virtual void Print()
  {
    cout<<"E::Print"<<endl;
  }
};

int main()
{
  A a;
  B b;
  E e;
  D d;
  A * pa = &a;
  B * pb = &b;
  D * pd = &d;
  E * pe = &e;

  pa->Print();
  pa=pb;
  pa->Print();
  pa=pd;
  pa->Print();
  pa=pe;
  pa->Print();

  return 0;
}
