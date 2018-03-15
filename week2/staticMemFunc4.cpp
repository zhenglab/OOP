#include <iostream>

using namespace std;
class test
{
private:
    int x;
    int y;
public:
    static int GetX()
    {
        //x += 5; //错误，静态成员函数不能调用非静态数据成员，要通过类的对象来调用。
        test *p = new test;// new一个类的对象！！！！
        p->x = 222;//使用类的对象调用非静态数据成员！！！！
        p->func();//使用类的对象调用非静态成员函数！！！！
        return p->x;
        delete p;//使用完后delete！！！！
    }
    void func(){cout<<"func()被静态成员函数调用"<<endl;}
};
int main()
{
    test a;

    cout<<a.GetX()<<endl;

    return 0;
}
