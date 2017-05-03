/*
  class和struct的区别？
  (1) C的struct与C++的class的区别。
  (2) C++中的struct和class的区别。
*/

#include <iostream>
using namespace std;

struct A {//class
  //public:
  char c1;
  int n2;
  double db3;
  //  A() { }
};

int main()
{
  A a={'p',7,3.1415926};
  cout<<a.c1<<" "<<a.n2<<" "<<a.db3<<endl;

  return 0;
}

/*
struct和class在C++中本质区别是默认的访问控制
struct是public的，class是private的。

struct更适合看成是一个数据结构的实现体
class更适合看成是一个对象的实现体

C的struct与C++的class的区别：struct只是作为一种复杂数据类型定义，不能用于面向对象编程。
C++中的struct和class的区别：对于成员访问权限以及继承方式，class中默认的是private的，而struct中则是public的。class还可以用于表示模板类型，struct则不行。
http://genwoxuec.blog.51cto.com/1852764/503334
*/
