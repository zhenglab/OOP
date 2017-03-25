#include <iostream>
using namespace std;

class CEmployee
{
private:
  char szName[30];
public:
  int salary;
  void setName(char * name);
  void getName(char * name);
  void averageSalary(CEmployee e1, CEmployee e2);
};

void CEmployee::setName(char * name)
{
  strcpy(szName,name);
}

void CEmployee::getName(char * name)
{
  strcpy(name,szName);
}

void CEmployee::averageSalary(CEmployee e1, CEmployee e2)
{
  salary=(e1.salary+e2.salary)/2;
}

int main()
{
  CEmployee e;
  //  strcpy(e.szName,"Tom");
  e.setName("Harry");
  e.salary=5000;

  return 0;
}
//设置私有成员的目的：强制对成员变量的访问一定要通过成员函数进行
//设置私有成员的机制：隐藏
