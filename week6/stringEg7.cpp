#include <iostream>
#include <string>
using namespace std;

//string的比较
int main()
{
  string s1("hello"),s2("hello"),s3("hell");
  //== > >= < <= !=运算符重载
  bool b = (s1==s2);
  cout<<b<<endl;
  b = (s1==s3);
  cout<<b<<endl;
  b= (s1>s3);
  cout<<b<<endl;

  cout<<endl;

  //成员函数compare()
  int f1=s1.compare(s2);
  int f2=s1.compare(s3);
  int f3=s3.compare(s1);
  int f4=s1.compare(1,2,s3,0,3); //-1 vs -3
  int f5=s1.compare(0,s1.size(),s3);
  cout<<f1<<endl<<f2<<endl<<f3<<endl;
  cout<<f4<<endl<<f5<<endl;

  return 0;
}
