//赋值兼容规则
#include <iostream>
#include <time.h>
using namespace std;

class B0
{
public:
    void display()
    {
        cout<<"B0::display()"<<endl;
    }
};

class B1:public B0
{
public:
    void display()
    {
        cout<<"B1::display()"<<endl;
    }
};

class B2:public B0
{
public:
    void display()
    {
        cout<<"B2::display()"<<endl;
    }
};

void fun(B0 *ptr)
{
    ptr->display();
}

int main() 
{ 
    B0 b0;
    B1 b1;
    B2 b2;
    fun(&b0);
    b0 = b1;
    fun(&b0);
    b0 = b2;
    fun(&b0);

    return 0; 
}

/*
  派生类的对象可以赋值给基类对象；
  派生类的对象可以初始化基类的引用；
  派生类对象的地址可以赋给指向基类的指针。
  在替代之后，派生类对象就可以作为基类的对象使用，但只能使用从基类继承的成员。
  http://www.cnblogs.com/fzhe/archive/2012/12/25/2832250.html
*/
