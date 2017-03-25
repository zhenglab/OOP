#include <iostream>
using namespace std;

int main()
{
  int *pn;
  pn = new int; //new运算符返回类型：int *
  *pn=5;
  cout<<*pn<<endl;
  delete pn; //delete的指针必须指向new出来的空间
  //  delete pn;

  int *pm;
  int i=5;
  pm = new int[i*20]; //new运算符返回类型：int *
  pm[0]=20;
  pm[100]=30;
  cout<<pm[0]<<" "<<pm[100]<<endl;
  //  delete pm; //delete不彻底
  delete [] pm; //detelte的指针必须指向new出来的数组
  
  return 0;
}
