#include <iostream>
#include <string>
using namespace std;

//string的子串和交换
int main()
{
  string s1("hello world"),s2;
  //成员函数substr()
  cout<<s1<<"|"<<s2<<endl;
  s2=s1.substr(4,5);
  cout<<s1<<"|"<<s2<<endl;

  //成员函数swap()
  cout<<s1<<"|"<<s2<<endl;
  s1.swap(s2);
  cout<<s1<<"|"<<s2<<endl;

  return 0;
}
