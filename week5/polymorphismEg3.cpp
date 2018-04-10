#include<iostream>  
using namespace std;  

class Base  
{  
public:  
    virtual void f(float x)  
    {  
        cout<<"Base::f(float)"<< x <<endl;  
    }  
    void g(float x)  
    {  
        cout<<"Base::g(float)"<< x <<endl;  
    }  
    void h(float x)  
    {  
        cout<<"Base::h(float)"<< x <<endl;  
    }  
};  
class Derived : public Base  
{  
public:  
    virtual void f(float x)  
    {  
        cout<<"Derived::f(float)"<< x <<endl;   //多态、覆盖  
    }  
    void g(int x)  
    {  
        cout<<"Derived::g(int)"<< x <<endl;     //隐藏  
    }  
    void h(float x)  
    {  
        cout<<"Derived::h(float)"<< x <<endl;   //隐藏  
    }  
};  
int main(void)  
{  
    Derived d;  
    Base *pb = &d;  
    Derived *pd = &d;  
    // Good : behavior depends solely on type of the object  
    pb->f(3.14f);   // Derived::f(float) 3.14  
    pd->f(3.14f);   // Derived::f(float) 3.14  

    // Bad : behavior depends on type of the pointer  
    pb->g(3.14f);   // Base::g(float)  3.14  
    pd->g(3.14f);   // Derived::g(int) 3   

    // Bad : behavior depends on type of the pointer  
    pb->h(3.14f);   // Base::h(float) 3.14  
    pd->h(3.14f);   // Derived::h(float) 3.14  
    return 0;  
}  
/*
1、有virtual才可能发生多态现象 
2、不发生多态（无virtual）调用就按原类型调用 

重载、隐藏、覆盖/重写
（1）如果派生类的函数与基类的函数同名，但是参数不同。此时，不论有无virtual关键字，基类的函数将被隐藏（注意别与重载混淆）。 
（2）如果派生类的函数与基类的函数同名，并且参数也相同，但是基类函数没有virtual关键字。此时，基类的函数被隐藏（注意别与覆盖混淆）。 
上面的程序中： 
（1）函数Derived::f(float)覆盖了Base::f(float)。 
（2）函数Derived::g(int)隐藏了Base::g(float)，而不是重载。 
（3）函数Derived::h(float)隐藏了Base::h(float)，而不是覆盖。

a、编译时多态性：通过重载函数实现 。 
b、运行时多态性：通过虚函数实现。 
*/
