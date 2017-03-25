#include <iostream>
using namespace std;

//一个类的成员变量是另一个类的对象
//包含成员对象的类叫封闭类 enclosing
class CTyre {
private:
  int radius;
  int width;
public:
  //初始化列表
  CTyre(int r, int w): radius(r), width(w) { }
};
class CEngine {
};
class CCar {
private:
  int price;
  CTyre tyre;
  CEngine engine;
public:
  CCar(int p, int tr, int tw);
};
CCar::CCar(int p, int tr, int w): price(p),tyre(tr,w) {
}

int main()
{
  CCar car(20000,17,225);

  return 0;
}
