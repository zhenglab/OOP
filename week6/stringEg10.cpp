#include <iostream>
#include <string>
using namespace std;

//string的替换 成员函数replace()
int main()
{
  string s1("hello world");
  cout<<s1<<endl;
  s1.replace(2,3,"haha");
  cout<<s1<<endl;

  s1.replace(2,3,"haha",1,2);
  cout<<s1<<endl;
  
  return 0;
}
