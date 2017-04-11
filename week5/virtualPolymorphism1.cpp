#include <iostream>
using namespace std;

class CBase {
public:
  virtual void SomeVirtualFunction()
  {
    cout<<"CBase SomeVirtualFunction"<<endl;
  }
};

class CDerived:public CBase {
public:
  virtual void SomeVirtualFunction()
  {
    cout<<"CDerived SomeVirtualFunction"<<endl;
  }
};

int main()
{
  CDerived ODerived;
  CBase * p = &ODerived;
  p->SomeVirtualFunction();

  return 0;
}
