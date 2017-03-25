#include <stdio.h>

void PrintMin(int a, int b)
{
  if(a<b)
    printf("%d",a);
  else
    printf("%d",b);
}

int main()
{
  void (* pf)(int, int);
  int x=4,y=5;
  pf=PrintMin;  //一个指向函数的指针必须确保该函数被定义且分配了内存，否则它将指向一个空地址，这个可是大忌！
  pf(x,y);
  return 0;
}
/*
  数组名就是指向数组第一个元素的常量指针
  函数名也是指向函数第一条指令的常量指针
  type (*func)(type &,type &)
  type *func(type ,type)
*/
