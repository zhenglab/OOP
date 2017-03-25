#include <iostream>
using namespace std;

//一个类的友元类可以访问该类的私有成员
class CCar {
private:
  int price;
  friend class CDriver;  //声明CDriver为友元类
};

class CDriver {
public:
  CCar myCar;
  void ModifyCar()
  {
    myCar.price += 1000;  //CDriver是CCar的友元类
  }
};

int main()
{
  return 0;
}
//友元类之间的关系不能传递且不能继承
