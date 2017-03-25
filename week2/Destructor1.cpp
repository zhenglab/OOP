#include <iostream>
using namespace std;

/*
 * 构造函数：                 析构函数：
 *  成员函数的一种             
 *  名字与类名相同             名字与类名相同（前面加~）
 *  可以有参数但不能有返回值     没有参数和返回值
 *  可以有多个构造函数          最多只有一个析构函数
 */

class Ctest {
private:
  char * p;
public:
  Ctest()
  {
    p = new char[10];
    cout<<"Constructor called"<<endl;
  }
  ~Ctest()
  {
    delete [] p;
    cout<<"Destructor called"<<endl;
  }
};

int main()
{
  Ctest array[2];

  Ctest * pTest;
  pTest = new Ctest;
  delete pTest;

  pTest = new Ctest[3];
  delete [] pTest;

  cout<<"End Main"<<endl;  
  return 0;
}
