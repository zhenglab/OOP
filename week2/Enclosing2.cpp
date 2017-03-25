#include <iostream>
using namespace std;

class CTyre {
public:
  CTyre() { cout<<"CTyre constructor"<<endl; }
  ~CTyre() { cout<<"CTyre destructor"<<endl; }
};

class CEngine {
public:
  CEngine() { cout<<"CEngine constructor"<<endl; }
  ~CEngine() { cout<<"CEngine destructor"<<endl; }
};

class CCar {
private:
  //  CEngine engine;
  CTyre tyre;
  CEngine engine;
public:
  CCar() { cout<<"CCar constructor"<<endl; }
  ~CCar() { cout<<"CCar destructor"<<endl; }
};

int main()
{
  CCar car;

  return 0;
}
