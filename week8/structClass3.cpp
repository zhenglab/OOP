#include <iostream>
using namespace std;
class CBase
{
public:
  void print()                //public成员函数
  {
    cout << "CBase: print()..." << endl;
  }
};
class CDerived1 : CBase        //默认private继承
{
};

class CDerived2 : public CBase   //指定public继承
{
};

struct SDerived1 : CBase        //默认public继承
{
};

struct SDerived2 : private CBase  //指定private继承
{
};

int main()
{
  CDerived1 cd1;
  CDerived2 cd2;
  SDerived1 sd1;
  SDerived2 sd2;
  
  //  cd1.print();    //编译错误
  cd2.print();
  sd1.print();
  //  sd2.print();    //编译错误
  
  return 0;
}
