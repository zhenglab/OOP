#include <iostream>
using namespace std;

class A
{
public:
  A() { };
  A(A & a)
  {
    //本函数并没有做任何复制工作
    cout<<"Copy Constructor called"<<endl;
  }
};

//复制构造函数起作用情况二：如果某函数有一个参数是类的对象，
//那么该函数被调用时，类的复制构造函数将被调用。
void Func(A a1) { }

int main()
{
  A a2;
  //形参a1和实参a2未必相等（缺省复制构造函数是相等的）
  //a2复制构造函数初始化a1
  Func(a2);

  return 0;
}
