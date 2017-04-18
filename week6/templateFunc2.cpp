#include <iostream>
using namespace std;

//求数组最大元素的MaxElement函数模板

template <class T>
T MaxElement(T a[], int size) //size是数组元素个数
{
  T tmpMax=a[0];
  for(int i=1;i<size;++i)
    if(tmpMax<a[i])
      tmpMax=a[i];

  return tmpMax;
}

//函数模板可以重载，只要形参表不同
template <class T1, class T2>
void print(T1 arg1, T2 arg2)
{
  cout<<arg1<<" "<<arg2<<endl;
}

template <class T>
void print(T arg1, T arg2)
{
  cout<<arg1<<" "<<arg2<<endl;
}

int main()
{
  return 0;
}
