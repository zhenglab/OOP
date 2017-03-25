#include <iostream>
using namespace std;

//两个成员函数，名字和参数表都一样，但是一个是const，另一个不是，算重载。

class CTest {
private:
  int n;
public:
  CTest() { n=1; }
  int GetValue() const { return n; }
  int GetValue() { return 2*n; }
};

int main()
{
  const CTest objTest1;  //常量对象
  CTest objTest2;  //非常量对象
  cout<<objTest1.GetValue()<<endl;
  cout<<objTest2.GetValue()<<endl;

  return 0;
}
