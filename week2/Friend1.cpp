#include <iostream>
using namespace std;

//一个类的友元函数可以访问该类的私有成员
class CCar;  //声明CCar类
class CDriver {
public:
  void ModifyCar(CCar * pCar);
};
class CCar {
private:
  int price;
  friend int MostExpensiveCar(CCar cars[], int total);  //声明友元
  friend void CDriver::ModifyCar(CCar * pCar);  //声明友元
};

void CDriver::ModifyCar(CCar * pCar)
{
  pCar->price += 1000;
}
int MostExpensiveCar(CCar cars[], int total)
{
  int tmpMax=-1;
  for(int i=0;i<total;++i)
    if(cars[i].price > tmpMax)
      tmpMax=cars[i].price;
  return tmpMax;
}
int main()
{
  return 0;
}
