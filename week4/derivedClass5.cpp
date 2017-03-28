//派生类成员的标识和访问 作用域分辨
#include <iostream>
#include <time.h>
using namespace std;

class B1
{
public:
    int nV;
    void fun()
    {
        cout<<"member of B1 "<<nV<<endl;
    }
};

class B2
{
public:
    int nV;
    void fun()
    {
        cout<<"member of B2 "<<nV<<endl;
    }
};

class D1: public B1, public B2
{
public:
    int nV;
    void fun()
    {
        cout<<"member of D1 "<<nV<<endl;
    }
};

int main() 
{ 
    D1 d1;
    d1.nV = 1;
    d1.fun();
    d1.B1::nV = 2;
    d1.B1::fun();
    d1.B2::nV = 3;
    d1.B2::fun();

    return 0; 
}

/*
  如果某派生类的多个基类拥有同名的成员，同时，派生类又新增这样的同名成员，在这种情况下，派生类成员将覆盖所有基类的同名成员。
  这就需要作用域分辨符的调用方式才能调用基类的同名成员。
  http://www.cnblogs.com/fzhe/archive/2012/12/25/2832250.html
*/
