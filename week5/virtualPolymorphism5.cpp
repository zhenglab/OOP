#include <iostream>
using namespace std;

class myclass {
public:
  virtual void hello() { cout<<"hello from myclass"<<endl; }
  virtual void bye() { cout<<"bye from myclass"<<endl; }
};

class son:public myclass {
public:
  void hello() { cout<<"hello from son"<<endl; }
  son() { hello(); } //构造函数、析构函数中调用虚函数不是多态！
  ~son() { bye(); }
}; //派生类和基类中虚函数同名同参数表的函数，不加virtual也自动成为虚函数

class grandson:public son {
public:
  void hello() { cout<<"hello from grandson"<<endl; }
  void bye() { cout<<"bye from grandson"<<endl; }
  grandson() { cout<<"constructing grandson"<<endl; }
  ~grandson() { cout<<"destructing grandson"<<endl; }
};

int main()
{
  grandson gson;
  son * pson;
  pson=&gson;
  pson->hello();
  
  return 0;
}
