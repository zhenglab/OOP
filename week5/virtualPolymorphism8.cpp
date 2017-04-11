#include <iostream>
using namespace std;

class CSon {
public:
  virtual ~CSon() { cout<<"~CSon"<<endl; } //虚析构函数 不允许虚构造函数
};

class CGrandson:public CSon {
public:
  ~CGrandson() { cout<<"~CGrandson"<<endl; };
};

int main()
{
  CSon *p = new CGrandson;
  delete p;

  return 0;
}
