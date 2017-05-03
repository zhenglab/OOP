#include <iostream>
using namespace std;
class CPoint
{
  int x;                  //默认为private
  int y;                  //默认为private
  void print()             //默认为private
  {
    cout << "CPoint: (" << x << ", " << y << ")" << endl;
  }
public:
  CPoint(int x, int y)      //构造函数，指定为public
  {
    this->x = x;
    this->y = y;
  }
  void print1() //public
  {
    cout << "CPoint: (" << x << ", " << y << ")" << endl;
  }
};

struct SPoint
{
  int x;              //默认为public
  int y;              //默认为public
  void print()         //默认为public
  {
    cout << "SPoint: (" << x << ", " << y << ")" << endl;
  }
  SPoint(int x, int y)  //构造函数,默认为public
  {
    this->x = x;
    this->y = y;
  }
private:
  void print1()      //private类型的成员函数
  {
    cout << "SPoint: (" << x << ", " << y << ")" << endl;
  }
};

int main(void)
{
  CPoint cpt(1, 2);  //调用CPoint带参数的构造函数
  SPoint spt(3, 4);  //调用SPoint带参数的构造函数
  
  //cout << cpt.x << " " << cpt.y << endl;  //编译错误
  //  cpt.print();       //编译错误
  cpt.print1();      //合法
  
  spt.print();      //合法
  //  spt.print1();     //编译错误
  cout << spt.x << " " << spt.y << endl;  //合法
  
  return 0;
}
