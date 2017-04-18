#include <iostream>
#include <string>
using namespace std;

//string的删除 成员函数erase()
int main()
{
  string s1("hello world");
  cout<<s1<<","<<s1.length()<<","<<s1.size()<<endl;
  s1.erase(5);
  cout<<s1<<","<<s1.length()<<","<<s1.size()<<endl;

  return 0;
}
