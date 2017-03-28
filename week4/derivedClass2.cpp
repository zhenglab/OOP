#include <iostream>
using namespace std;

class Base {
public:
  int n;
  Base(int i):n(i)
  {
    cout<<"Base "<<n<<" constructed"<<endl;
  }
  ~Base()
  {
    cout<<"Base "<<n<<" destructed"<<endl;
  }
};

class Derived:public Base {
public:
  Derived(int i):Base(i)
  {
    cout<<"Derived constructed"<<endl;
  }
  ~Derived()
  {
    cout<<"Derived destructed"<<endl;
  }
};

class MoreDerived:public Derived {
public:
  MoreDerived():Derived(4)
  {
    cout<<"More Derived constructed"<<endl;
  }
  ~MoreDerived() {
    cout<<"More Derived destructed"<<endl;
  }
};

int main()
{
  MoreDerived Obj;

  return 0;
}
