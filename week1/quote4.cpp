#include <iostream>
using namespace std;

int n=4;
int & SetValue() { return n; }  //引用作为函数的返回值

int main()
{
  SetValue()=40;
  cout<<n<<endl;
  return 0;
}
