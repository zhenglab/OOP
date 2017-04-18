#include <iostream>
#include <string>
using namespace std;

//string的字符操作
int main()
{
  string s1("Hello");
  for(int i=0;i<s1.length();i++) //s1.length()+1
    cout<<s1[i]<<endl; //[]运算符重载
  //成员函数at()会做范围检查，如果超出范围会抛出out_of_range异常
  //下标运算符[]不做范围检查
  cout<<endl;
  for(int i=0;i<s1.length();i++) //s1.length()+1
    cout<<s1.at(i)<<endl;

  //成员函数c_str() 返回一个以null终止的c字符串
  cout<<endl;
  string s2("hello world");
  printf("%s\n",s2.c_str()); //s2.c_str()返回传统的const char *类型字符串且以'\0'结尾

  //成员函数data() 返回一个非null终止的c字符数组
  cout<<endl;
  string s3("hello world");
  const char * p1=s3.data();
  for(int i=0;i<s3.length();i++)
    printf("%c",*(p1+i)); //s3.data()返回一个char *类型的字符串 注意对s3的修改可能会使p1出错
  cout<<endl;

  //成员函数copy(*s,n,pos=0) 把当前串中以pos开始的n个字符拷贝到以s为起始位置的字符数组中，返回实际拷贝的数目
  cout<<endl;
  string s4("hello world");
  int len=s4.length();
  char * p2=new char[len+1];
  cout<<s4.copy(p2,5,0)<<endl;;
  //  p2[5]=0;
  cout<<p2<<endl;
  
  return 0;
}
