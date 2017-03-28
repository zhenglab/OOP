//派生类析构函数
#include <iostream>
#include <time.h>
using namespace std;

class B1
{
public:
    B1(int i)
    {
        cout<<"constructing B1 "<<i<<endl;
    }
    ~B1()
    {
        cout<<"destructing B1"<<endl;
    }
};

class B2
{
public:
    B2(int j)
    {
        cout<<"constructing B2 "<<j<<endl;
    }
    ~B2()
    {
        cout<<"destructing B2"<<endl;
    }
};

class B3
{
public:
    B3()
    {
        cout<<"constructing B3"<<endl;
    }
    ~B3()
    {
        cout<<"destructing B3"<<endl;
    }
};

class C: public B2, public B1, public B3
{
public:
    C(int a, int b, int c, int d):B1(a), memberB2(d), memberB1(c),B2(b)
    {

    }
private:
    B1 memberB1;
    B2 memberB2;
    B3 memberB3;
};

int main() 
{ 
    C obj(1,2,3,4);

    return 0; 
}

/*
  派生类的析构函数的功能是在该对象消亡之前进行一些必要的清理工作，析构函数没有类型，也没有参数。
  析构函数的执行顺序与构造函数相反。
  http://www.cnblogs.com/fzhe/archive/2012/12/25/2832250.html
*/
