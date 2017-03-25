#include <iostream>
using namespace std;

int main()
{
  int n=4;
  int & r=n; //r引用了n，r的类型是：int &
             //某个变量的引用，等价于这个变量，相当于该变量的一个别名。
             //1.定义引用时一定要将其初始化成引用某个变量；
             //2.初始化后，它就一直引用该变量，不会再引用别的变量了。
             //3.引用只能引用变量，不能引用常量和表达式。
  r=4;
  cout<<r<<endl;
  cout<<n<<endl;
  n=5;
  cout<<r<<endl;
  return 0;
}
