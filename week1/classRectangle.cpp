#include <iostream>
using namespace std;

class CRectangle
{
public:
  int w,h;
  void Init(int w_, int h_)
  {
    w=w_;
    h=h_;
  }
  int Area()
  {
    return w*h;
  }
  int Perimeter()
  {
    return 2*(w+h);
  }
};

void PrintRectangle(CRectangle & r)
{
  cout<<r.Area()<<","<<r.Perimeter()<<endl;
}

int main()
{
  int w,h;
  CRectangle r; //r是一个对象
  cin>>w>>h;
  //对象名.成员名
  r.Init(w,h);
  cout<<r.Area()<<endl<<r.Perimeter()<<endl;

  //指针->成员名
  CRectangle r1,r2;
  CRectangle *p1=&r1;
  CRectangle *p2=&r2;
  p1->w=5;
  p2->Init(3,4);

  //引用名.成员名
  CRectangle r3;
  CRectangle & rr=r3;
  rr.w=5;
  rr.Init(3,4);
  PrintRectangle(r3);
  
  return 0;
}
//类定义的变量 => 类的实例 => “对象”
//调用通过：对象／对象的指针／对象的引用

//成员函数体和类的定义可以分开写 CRectangle::Area()
