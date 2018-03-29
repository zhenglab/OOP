#include <iostream>
using namespace std;
class B0// 声明为基类B0
{
  int nv;//默认为私有成员
public://外部接口
  B0(int n){ nv = n; cout << "Member of B0" << endl; }//B0类的构造函数
  void fun(){ cout << "fun of B0" << endl; }
};
class B1:virtual public B0
{
  int nv1;
public:
  B1(int a) :B0(a){ cout << "Member of B1" << endl; }
};
class B2:virtual public B0
{
  int nv2;
public:
  B2(int a) :B0(a){ cout << "Member of B2" << endl; }
};
class D1:public B1, public B2
{
  int nvd;
public:
  D1(int a) :B0(a), B1(a), B2(a){ cout << "Member of D1" << endl; }// 此行的含义，参考下边的 “使用注意5”
  void fund(){ cout << "fun of D1" << endl; }
};
int main(void)
{
  D1 d1(1);
  d1.fund();
  d1.fun();
  
  return 0;
}

/*
(1) 一个类可以在一个类族中既被用作虚基类，也被用作非虚基类。
(2) 在派生类的对象中，同名的虚基类只产生一个虚基类子对象，而某个非虚基类产生各自的子对象。
(3) 虚基类子对象是由最远派生类的构造函数通过调用虚基类的构造函数进行初始化的。
(4) 最远派生类是指在继承结构中建立对象时所指定的类。
(5) 派生类的构造函数的成员初始化列表中必须列出对虚基类构造函数的调用；如果未列出，则表示使用该虚基类的缺省构造函数。
(6) 从虚基类直接或间接派生的派生类中的构造函数的成员初始化列表中都要列出对虚基类构造函数的调用。但仅仅用建立对象的最远派生类的构造函数调用虚基类的构造函数，而该派生类的所有基类中列出的对虚基类的构造函数的调用在执行中被忽略，从而保证对虚基类子对象只初始化一次。
(7) 在一个成员初始化列表中同时出现对虚基类和非虚基类构造函数的调用时，虚基类的构造函数先于非虚基类的构造函数执行。
*/
