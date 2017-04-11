#include <iostream>
using namespace std;

/* 抽象类：包含纯虚函数的类
 *  只能作为基类来派生新类使用
 *  不能创建抽象类的对象
 *  抽象类的指针和引用 => 由抽象类派生出来的类的对象
 *
 * 抽象类中，
 *  在成员函数中可以调用纯虚函数
 *  在构造函数/析构函数内部不能调用纯虚函数
 * 如果一个类从抽象类派生而来，它实现了基类中的所有纯虚函数，才能成为非抽象类。
 */

class A {
public:
  virtual void f() = 0; //纯虚函数 没有函数体
  void g() { this->f(); } //ok
  A() { f(); }; //f() wrong
};

class B:public A {
public:
  void f() { cout<<"B::f"<<endl; }
};

int main()
{
  B b;
  b.g();

  return 0;
}
