/*
  调用qsort函数，将一个unsigned int数组按照个位数从小到大进行排序。
  比如8、23、15三个数，按个位数从小到大排序，就应该是：23、15、8。
*/
#include <stdio.h>
#include <stdlib.h>

int MyCompare(const void * elem1, const void * elem2)
{
  unsigned int * p1, * p2;
  p1=(unsigned int *) elem1;  //"* elem1"非法
  p2=(unsigned int *) elem2;
  return (* p1 % 10) - (* p2 % 10);
  //return (*p1)-(*p2);
}

#define NUM 5
int main()
{
  unsigned int an[NUM] = {8,123,11,10,4};
  qsort(an,NUM,sizeof(unsigned int),MyCompare);  //man 3 qsort
  for(int i=0;i<NUM;i++)
    printf("%d ",an[i]);
  return 0;
}
