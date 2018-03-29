#include <iostream>  
using namespace std;  
class A  
{  
public:  
  void f1();  
  A()  
  {  
    i1=10;  
    j1=11;  
    }  
protected:  
  int j1;  
private:  
  int i1;  
};

class B:private A  
{  
public:  
  void f2();  
  B()  
  {  
    i2=20;  
    j2=21;  
  }  
protected:  
    int j2;  
private:  
  int i2;  
};

class C:public B  
{  
public:  
  void f3();  
  C()  
  {  
    i3=30;  
    j3=31;  
  }  
protected:  
  int j3;  
private:  
  int i3;  
};

int main()  
{  
  return 0;  
} 
