#include <iostream>
using namespace std;

/*
模板是一种对类型进行参数化的工具
  函数模板针对仅参数类型不同的函数
  类模板针对仅数据成员和成员函数类型不同的类
使用模板的目的就是能够让程序员编写与类型无关的代码
注意：模板的声明或定义只能在全局，命名空间或类范围内进行。
template <class 形参名，class 形参名，...> 返回类型 函数名(参数列表) { 函数体 }
template <class 形参名，class 形参名，...> class 类名 {  };
<模板形参> 类型形参 非类型形参 模板形参
http://www.cnblogs.com/gw811/archive/2012/10/25/2738929.html
*/
template <class T>
void Swap(T & x, T & y)
{
  T tmp=x;
  x=y;
  y=tmp;
}

int main()
{
  int m=1,n=2;
  cout<<m<<" "<<n<<endl;
  Swap(m,n); //编译器自动生成 void Swap(int &, int &) 函数
  cout<<m<<" "<<n<<endl;

  double f=1.2,g=2.3;
  cout<<f<<" "<<g<<endl;
  Swap(f,g); //编译器自动生成 void Swap(double &, double &) 函数
  cout<<f<<" "<<g<<endl;

  return 0;
}
