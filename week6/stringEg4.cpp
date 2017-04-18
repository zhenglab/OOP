#include <iostream>
#include <string>
using namespace std;

//string的特性描述
int main()
{
  string s1("hello world");
  //成员函数capacity() 返回无需增加内存即可存放的字符数
  cout<<s1.capacity()<<endl;
  //成员函数max_size() 返回string对象可存放的最大字符数
  cout<<s1.max_size()<<endl;
  //成员函数size()和length() 返回字符串的大小和长度
  cout<<s1.size()<<endl;
  cout<<s1.length()<<endl;
  //成员函数empty() 返回string对象是否为空
  cout<<s1.empty()<<endl;
  cout<<s1<<"aaa"<<endl;
  //成员函数resize(len,c) 把字符串当前大小置为len，并用字符c填充不足的部分
  s1.resize(s1.length()+10);
  cout<<s1.capacity()<<endl;
  cout<<s1.max_size()<<endl;
  cout<<s1.size()<<endl;
  cout<<s1.length()<<endl;
  cout<<s1<<"aaa"<<endl;
  s1.resize(0);
  cout<<s1.empty()<<endl;

  return 0;
}
