#include <iostream>
using namespace std;

class CRectangle {
private:
  int w,h;
  //普通成员变量每个对象有各自的一份
  //静态成员变量一共就一份，为所有对象共享。
  //sizeof运算符不会计算静态成员变量
  static int nTotalArea;  //静态成员变量
  static int nTotalNumber;
public:
  CRectangle(int w_, int h_);
  CRectangle(const CRectangle & r);
  ~CRectangle();
  //普通成员函数必须具体作用于某个对象
  //静态成员函数并不具体作用于某个对象
  static void PrintTotal();  //静态成员函数
};
//静态成员不需要通过对象就能访问
/* 如何访问
 * 类名::成员名  CRectangle::PrintTotal();
 * 对象名.成员名 CRectangle r; r.PrintTotal();
 * 指针->成员名  CRectangle * p = &r; p->PrintTotal();
 * 引用.成员名   CRectangle & ref=r; int n=ref.nTotalNumber;
 */
/*
 * 静态成员变量本质上是全局变量，哪怕一个对象都不存在，类的静态成员变量也存在。
 * 静态成员函数本质上是全局函数。
 * 设置静态成员这种机制的目的是将和某些类紧密相关的全局变量和函数写到类里面，
 *   看上去像一个整体，易于维护和理解。
 */

CRectangle::CRectangle(int w_, int h_)
{
  w=w_;
  h=h_;
  nTotalNumber++;
  nTotalArea += w*h;
}
CRectangle::~CRectangle()
{
  nTotalNumber--;
  nTotalArea -= w*h;
}
void CRectangle::PrintTotal()
{
  cout<<nTotalNumber<<","<<nTotalArea<<endl;
  //在静态成员函数中不能访问非静态成员变量，也不能调用非静态成员函数。
  //  cout<<w<<","<<nTotalNumber<<","<<nTotalArea<<endl;
  //解释不通：w到底是属于哪个对象的？
}

int CRectangle::nTotalNumber = 0;
int CRectangle::nTotalArea = 0;
//必须在定义类的文件中对静态成员变量进行一次说明或初始化
//否则编译可以通过但链接不能通过

int main()
{
  CRectangle r1(3,3), r2(2,2);
  //cout<<CRectangle::nTotalNumber;
  CRectangle::PrintTotal();
  r1.PrintTotal();

  return 0;
}

//当调用复制构造函数生成临时的隐藏的CRectangle对象时
//  调用一个以CRectangle类对象作为参数的函数时
//  调用一个以CRectangle类对象作为返回值的函数时
//但临时对象在消亡时会调用析构函数
CRectangle::CRectangle(const CRectangle & r)
{
  w=r.w;
  h=r.h;
  nTotalNumber++;
  nTotalArea += w*h;
}
