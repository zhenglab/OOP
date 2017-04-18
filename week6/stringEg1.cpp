#include <iostream>
#include <string>
using namespace std;

/*
template <class charT> struct char_traits;
template <class T> class allocator; //<memory>头文件下 allocator：分配器
template < class charT,                          //定义字符串中字符的类型
           class traits = char_traits<charT>,    // basic_string::traits_type
           class Alloc = allocator<charT>        // basic_string::allocator_type
           > class basic_string;
typedef basic_string<char, char_traits<char>, allocator<char>> string;
typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t>> wstring;

http://www.cnblogs.com/zpcdbky/p/4470127.html

typedef VS. define
*/
//typedef basic_string<char> string;
//初始化
int main()
{
  string s1("Hello"); //一个参数的构造函数
  cout<<s1<<endl; //<<运算符重载
  string s2(8,'x'); //两个参数的构造函数
  cout<<s2<<endl;
  string month="March";
  cout<<month<<endl;

  //不提供以字符和整数为参数的构造函数
  //  string error1='c';
  //  string error2('u');
  //  string error3=22;
  //  string error4(8);
  //可以将字符赋值给string对象
  string s; //string s='n';
  s='n';
  cout<<s<<endl;

  return 0;
}
