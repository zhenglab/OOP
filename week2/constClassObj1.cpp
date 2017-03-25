#include <iostream>
using namespace std;

//如果不希望某个对象的值被改变
//则定义该对象的时候在前面加const关键字
class Demo {
private:
  int value;
public:
  void SetValue() { }
  Demo() { }  //常量对象必须人为定义构造函数
};

int main()
{
  const Demo obj;  //常量对象

  return 0;
}
