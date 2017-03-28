//派生类成员的标识和访问 作用域分辨
#include <iostream>
#include <time.h>
using namespace std;

class B0
{
public:
    int nV;
    void fun()
    {
        cout<<"member of B0 "<<nV<<endl;
    }
};

class B1:public B0
{
public:
    int nV1;
};

class B2:public B0
{
public:
    int nV2;
};

class D1:public B1, public B2
{
public:
    int nVd;
    void fund()
    {
        cout<<"member of D1"<<endl;
    }
};

int main() 
{ 
    D1 d1;
    d1.B1::nV = 2;
    d1.B1::fun();
    d1.B2::nV = 3;
    d1.B2::fun();

    return 0; 
}

/*
  如果某个派生类的部分或全部直接基类是从另一个共同的基类派生而来，在这些直接基类中，从上一级基类继承来的成员就拥有相同的名称，因此派生类中也就会产生同名现象，对这种类型的同名成员也要使用作用域分辨符来唯一标识，而且必须用直接基类进行限定。
  在这种情况下，派生类对象在内存中就同时拥有成员nV及fun的两份拷贝。但是很多情况下，我们只需要这样一个这样的数据拷贝，同一成员的多份拷贝增加了内存的开销。可以通过虚函数来解决这个问题。
  http://www.cnblogs.com/fzhe/archive/2012/12/25/2832250.html
*/
