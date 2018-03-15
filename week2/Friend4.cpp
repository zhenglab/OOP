#include <iostream>

using namespace std;

class A
{
public:
    friend class C;                         //这是友元类的声明
private:
    int data;
};

class C             //友元类定义，为了访问类A中的成员
{
public:
    void set_show(int x, A &a) { a.data = x; cout<<a.data<<endl;}
};

int main()
{
    class A a;
    class C c;

    c.set_show(1, a);

    return 0;
}
//不继承、单向性、不传递
