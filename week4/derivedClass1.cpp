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

int main()
{
  Derived Obj(3);

  return 0;
}
