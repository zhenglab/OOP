#include <iostream>
using namespace std;

class CSon {
public:
  ~CSon() { cout<<"~CSon"<<endl; }
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
