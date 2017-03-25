#include <iostream>
using namespace std;

int main()
{
  int n;
  const int & r=n;  //常引用r的类型是：const int &
  n=100;
  cout<<r<<endl;
  //r=200;  //不能通过常引用去修改其引用的内容
  n=300;
  cout<<r<<endl;
  return 0;
}
