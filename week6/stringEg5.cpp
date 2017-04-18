#include <iostream>
#include <string>
using namespace std;

//string的赋值
int main()
{
  string s1("cat"),s2;
  //=运算符重载
  s2=s1;
  cout<<s1<<endl;
  cout<<s2<<endl;
  //成员函数assign()
  string s3;
  s3.assign(s1);
  cout<<s1<<endl;
  cout<<s3<<endl;
  //成员函数assign()部分赋值
  string s4("catpig"),s5;
  s5.assign(s4,1,3);
  cout<<s4<<endl;
  cout<<s5<<endl;

  return 0;
}
