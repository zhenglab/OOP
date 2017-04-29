#include <iostream>
using namespace std;

//若一个类重载了运算符“()”，则该类的对象就成为函数对象。
class CMyAverage {
public:
  double operator()(int a1, int a2, int a3) {
    return (double)(a1+a2+a3)/3;
  }
};

int main()
{
  CMyAverage average; //函数对象
  cout<<average(3,2,3); //average.operator()(3,2,3)

  return 0;
}
