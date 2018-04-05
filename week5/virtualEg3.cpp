/****************************************************************************************************** 
* File:PolymorphismTest 
* Introduction:测试多态的一些特性。 
* Author:CoderCong
* Date:20141114 
* LastModifiedDate:20160113 
*******************************************************************************************************/  
#include <iostream>  
using namespace std;  
class A  
{  
public:  
    void foo()  
    {  
      cout<<1<<endl;  
    }  
    virtual void fun()  
    {  
      cout<<2<<endl;
    }  
};  
class B : public A  
{  
public:  
    void foo()  //由于基类的foo函数并不是虚函数，所以是隐藏，而不是重写  
    {  
      cout<<3<<endl;
    }  
    void fun()  //重写  
    {  
      cout<<4<<endl;
    }  
};  
int main(void)  
{  
    A a;  
    B b;  
    A *p = &a;  
    p->foo();  //输出1。  
    p->fun();  //输出2。  
    p = &b;  
    p->foo();  //输出1。因为p是基类指针，p->foo指向一个具有固定偏移量的函数。也就是基类函数  
    p->fun();  //输出4。多态。虽然p是基类指针，但实际上指向的是一个子类对象。p->fun指向的是一个虚函数。按照动态类型，调用子类函数      
    return 0;  
}
