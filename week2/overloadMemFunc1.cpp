#include <iostream>
using namespace std;

class Location {
private:
  int x,y;
public:
  void init(int x=0, int y=0);  //非内联成员函数
  void valueX(int val) { x=val; }  //内联成员函数
  //  void valueX(int val=0) { x=val; }  //函数重载二义性
  int valueX() { return x; }  //内联成员函数
};

void Location::init(int X, int Y)
{
  x=X;
  y=Y;
}

int main()
{
  Location A;
  A.init(5);
  A.valueX(5);
  cout<<A.valueX();
  return 0;
}
