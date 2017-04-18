#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class CStudent {
public:
  char szName[20];
  int nScore;
};

int main()
{
  CStudent s;
  ifstream InFile("students.dat",ios::in|ios::binary);
  if(!InFile) {
    cout<<"error"<<endl;
    return 0;
  }
  while(InFile.read((char *)&s,sizeof(s))) {
    int nReadedBytes=InFile.gcount(); //已读多少字节
    cout<<s.szName<<" "<<s.nScore<<endl;
  }
  
  InFile.close();

  return 0;
}

/*
换行符‘\n’（Line Feed，LF）和回车符‘\r’（Carriage Return，CR）
（1）换行符就是另起一行  --- '\n' 10 换行（newline）
（2）回车符就是回到一行的开头 --- '\r' 13 回车（return）

（1）在微软的MS-DOS和Windows中，使用“回车CR('\r')”和“换行LF('\n')”两个字符作为换行符;
（2）Windows系统里面，每行结尾是 回车+换行(CR+LF)，即“\r\n”；
（3）Unix系统里，每行结尾只有 换行LF，即“\n”；
（4）Mac系统里，每行结尾是 回车CR 即'\r'。

（1）一个直接后果是，Unix/Mac系统下的文件在Windows里打开的话，所有文字会变成一行；
（2）而Windows里的文件在Unix/Mac下打开的话，在每行的结尾可能会多出一个^M符号。
（3）Linux保存的文件在windows上用记事本看的话会出现黑点。

unix2dos
dos2unix

http://blog.csdn.net/tskyfree/article/details/8121951
http://www.ruanyifeng.com/blog/2006/04/post_213.html
*/
