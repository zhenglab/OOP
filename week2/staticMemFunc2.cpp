#include "iostream"
using namespace std;
class test
{
private:
     int x;
     int y;
public:
     static int num;
     static int Getnum()
     {
       //x+=5;
          num+=15;
          return num;
     }
};
int test::num = 10;
int main()
{
     test a;
     cout<<test::num<<endl;
     test::num = 20;
     cout<<test::num<<endl;
     cout<<test::Getnum()<<endl;
     cout<<a.Getnum()<<endl;
     return 0;
}
