#include <iostream>
using namespace std;

class Cat
{
public:
    Cat(int age):itsAge(age){HowManyCats++;}
    virtual ~Cat(){HowManyCats--;}
    virtual int getAge(){return itsAge;}
    virtual void setAge(int age){itsAge=age;};
    static int getHowMany()
    {//公有静态成员函数！！！！！！！！
        return HowManyCats;//访问私有静态成员数据！！！！！
    }
private:
    int itsAge;
    static int HowManyCats;
};
int Cat::HowManyCats=0; //对静态成员数据如此赋值
int main()
{
    const int maxCats =5;
    Cat *catHouse[maxCats];

    for(int i=0; i<maxCats; i++)
        catHouse[i]=new Cat(i);
    for(int i=0; i<maxCats; i++)
    {
        cout<<"there are "<<Cat::getHowMany();//公有静态成员函数！！！
        cout<<" cats left!"<<endl;
        if(!Cat::getHowMany()) break;
        cout<<"delete the cat which is "<<catHouse[i]->getAge()<<" years old."<<endl;
        delete catHouse[i];
        catHouse[i] = 0;
    }
    return 0;
}
