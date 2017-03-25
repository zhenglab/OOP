#include <stdio.h>

int main()
{
  //不可通过常量指针修改其指向的内容
  int n,m;
  const int *p=&n;
  //  *p=5;
  n=4;
  printf("%d\n",*p);
  m=5;
  p=&m;
  printf("%d\n",*p);

  //不能把常量指针赋值给非常量指针
  const int *p1;
  int *p2;
  //  p1=p2;
  //  p2=p1;
  //  p2=(int *)p1;
  return 0;
}
/*
const是单词constant的简写，字面意思是常数、常量。用于变量修饰，表明这个变量不能被修改；用于指针修饰，表明指针的指向物不能被修改；用于方法修饰，表明这个方法不会对对象造成改变。
#define: 预处理层面上的替换，不存在于语意层面
static: 变量的作用域控制
const: 变量的访问控制：只读
https://www.zhihu.com/question/29307292
*/
