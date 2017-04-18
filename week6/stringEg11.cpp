#include <iostream>
#include <string>
using namespace std;

//string的插入 成员函数insert()
int main()
{
  string s1("hello world");
  string s2("show insert");
  cout<<s1<<"|"<<s2<<endl;
  s1.insert(5,s2);
  cout<<s1<<"|"<<s2<<endl;
  s1.insert(2,s2,5,3);
  cout<<s1<<"|"<<s2<<endl;

  return 0;
}
