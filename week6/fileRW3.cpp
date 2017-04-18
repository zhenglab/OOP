#include <iostream>
#include <fstream>
using namespace std;

class CStudent
{
public:
  char szName[20];
  int nScore;
};

int main()
{
  CStudent s;
  fstream iofile("students.dat",ios::in|ios::out|ios::binary);
  if(!iofile) {
    cout<<"error"<<endl;
    return 0;
  }
  iofile.seekp(2*sizeof(s),ios::beg); //定位写指针到第三个记录
  iofile.write("Mike",strlen("Mile")+1);
  iofile.seekg(0,ios::beg); //定位读指针到开头
  while(iofile.read((char *)&s,sizeof(s)))
    cout<<s.szName<<" "<<s.nScore<<endl;
  iofile.close();

  return 0;
}
