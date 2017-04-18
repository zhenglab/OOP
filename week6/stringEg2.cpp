#include <iostream>
#include <string>
using namespace std;

//string长度 流输入输出
int main()
{
  string s("hello");
  cout<<s<<endl;
  //成员函数length()获得string对象的长度
  cout<<s.length()<<endl;
  //string支持流读取运算符
  string stringObject;
  cin>>stringObject;
  cout<<stringObject<<endl;
  cout<<"*****"<<endl;
  //string支持getline函数
  string s1;
  getline(cin,s1);
  cout<<s1<<endl;

  return 0;
}
