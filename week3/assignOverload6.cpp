#include <iostream>
using namespace std;

//赋值运算符 两边的类型 不匹配
//需要 重载赋值运算符 =
//赋值运算符只能重载为【成员函数】

/* 编写一个长度可变的字符串类String
 *  包含一个char *类型的成员变量
 *  指向动态分配的存储空间
 *  该存储空间用于存放“\0”结尾的字符串
 */
class String {
private:
  char * str;
public:
  String(): str(NULL) { }  //构造函数
  String(const String & s);  //复制构造函数
  String(const char * s);  //字符串初始化构造函数
  const char * c_str() { return str; }  // char * p=s.c_str();
  char * operator= (const char * s);
  String & operator= (const String & s);
  ~String();
};

String::String(const String & s)
{
  if(s.str) {
    str=new char[strlen(s.str)+1];
    strcpy(str,s.str);
  }
  else
    str=NULL;
}

String::String(const char * s)
{
  if(s) {
    str = new char[strlen(s)+1];
    strcpy(str,s);
  }
  else
    str=NULL;
}

char * String::operator=(const char * s)
{
  if(str)
    delete [] str;
  if(s) {
    str = new char[strlen(s)+1];
    strcpy(str,s);
  }
  else
    str=NULL;

  return str;
}

String & String::operator=(const String & s)
{
  if(str==s.str)
    return * this;
  if(str)
    delete [] str;
  if(s.str) {
    str=new char[strlen(s.str)+1];
    strcpy(str,s.str);
  }
  else
    str=NULL;
  return * this;
}

String::~String()
{
  if(str)
    delete [] str;
}

int main()
{
  String s1;
  s1="Good Luck!";
  cout<<s1.c_str()<<endl;
  String s2="Hello World!";
  cout<<s2.c_str()<<endl;
  String s3(s1);
  cout<<s3.c_str()<<endl;

  String s4;
  s4=s3;
  cout<<s4.c_str()<<endl;
  s4=s4;
  cout<<s4.c_str()<<endl;

  return 0;
}
      
