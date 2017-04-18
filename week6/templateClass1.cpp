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
template <class T1, class T2>
class Pair {
public:
  T1 key;
  T2 value;
  Pair(T1 k, T2 v): key(k),value(v) { };
  bool operator<(const Pair<T1,T2>&p) const;
};

template <class T1, class T2>
bool Pair<T1,T2>::operator<(const Pair<T1,T2>&p) const
{
  return key<p.key;
}

int main()
{
  Pair<string,int> student("Tom",19); //类模板实例化模板类
  cout<<student.key<<" "<<student.value;
  return 0;
}
//同一个类模板实例化的两个模板类是不兼容的
