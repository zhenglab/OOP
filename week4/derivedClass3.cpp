//派生类构造函数
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
};

class B2
{
public:
    B2(int j)
    {
        cout<<"constructing B2 "<<j<<endl;
    }
};

class B3
{
public:
    B3()
    {
        cout<<"constructing B3"<<endl;
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
  1.调用基类构造函数，调用顺序按照它们被继承时声明的顺序（从左到右）；
  2.调用内嵌成员对象的构造函数，调用顺序按照它们在类中声明的顺序；
  3.派生类的构造函数体中的内容。
  http://www.cnblogs.com/fzhe/archive/2012/12/25/2832250.html
*/
