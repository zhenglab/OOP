#include <iostream>
#include <string>
using namespace std;

//string的连接
int main()
{
  string s1("good "),s2("morning! ");
  //+运算符重载
  cout<<s1<<"|"<<s2<<"|"<<endl;
  s1 += s2;
  cout<<s1<<"|"<<s2<<"|"<<endl;

  //成员函数append()
  s1.append(s2);
  cout<<s1<<"|"<<s2<<"|"<<endl;
  s2.append(s1,3,s1.size());
  cout<<s1<<"|"<<s2<<"|"<<endl;

  return 0;
}
