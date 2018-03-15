#include <iostream>
using namespace std;

class M
{
public:
     M(int a) {A = a; B += a;}
     ~M(){}
     static void f1();
private:
     int A;
     static int B;
};

void M::f1()
{
     M m(5); //定义并初始化类对象
     cout<<"A="<<m.A<<endl; //静态成员函数中通过对象来引用非静态成员
     cout<<"B="<<B<<endl;
}
int M::B=5; //静态数据成员初始化的格式<数据类型><类名>::<静态数据成员名>=<值>

int main()
{
     M::f1(); //静态成员函数调用时不用对象名
     return 0;
}
