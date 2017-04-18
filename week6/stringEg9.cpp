#include <iostream>
#include <string>
using namespace std;

//string的查找 成员函数find()等
int main()
{
  cout<<string::npos<<endl;
  string s1("hello worlld");
  cout<<s1.find("ll")<<endl;
  cout<<s1.find("abc")<<endl;
  cout<<s1.rfind("ll")<<endl;
  cout<<s1.rfind("abc")<<endl;
  cout<<s1.find_first_of("abcde")<<endl;
  cout<<s1.find_first_of("abc")<<endl;
  cout<<s1.find_last_of("abcde")<<endl;
  cout<<s1.find_last_of("abc")<<endl;
  cout<<s1.find_first_not_of("abcde")<<endl;
  cout<<s1.find_first_not_of("hello world")<<endl;
  cout<<s1.find_last_not_of("abcde")<<endl;
  cout<<s1.find_last_not_of("hello world")<<endl;

  cout<<s1.find("ll",1)<<endl;
  cout<<s1.find("ll",2)<<endl;
  cout<<s1.find("ll",3)<<endl;

  return 0;
}
