#include "stdio.h"

class Test    
{    
private:  
    Test() {  };  
public:    
    static Test* getTest() {     
        static Test instance;    
        test = &instance;  
        return &instance;
    }    
    ~Test(){ printf("sdg\n"); }    
    void static testFun();    
    void printMember();    
    
private:    
    int m_a;
    static Test* test;
};

Test* Test::test;
    
void Test::testFun()    
{    
    test->m_a=20;               
}    
    
void Test::printMember()    
{    
    printf("%d\n", this->m_a);     
}    
    
int main()    
{    
    Test* test1 = Test::getTest();    
    Test* test2 = Test::getTest();    
    Test::testFun();    
    test1->printMember();
    test2->printMember();
    
    return 0;    
} 

//类中实例化对象，在创建的时候把this指针赋值给那个静态成员。
/*
  静态函数成员必须通过对象名来访问非静态数据成员。
  静态成员函数属于类(通过类访问，调用函数时没有提供this指针)，
  非静态成员函数属于实例（通过对象访问）（默认都提供了this指针），
  非静态成员也属于实例（通过对象访问），
  所以，要想在静态成员函数访问非静态成员变量，
  无非就是实例化一个对象，然后通过对象访问非静态成员变量。
*/
/*
  静态成员函数在类外实现时候无须加static关键字，否则是错误的；
  静态成员之间可以相互访问，包括静态成员函数访问静态数据成员和访问静态成员函数；
  非静态成员函数可以任意地访问静态成员函数和静态数据成员；
  静态成员函数不能访问非静态成员函数和非静态数据成员；
  由于没有this指针的额外开销，因此静态成员函数与类的全局函数相比速度上会有少许的增长；
  调用静态成员函数，可以用成员访问操作符(.)和(->)为一个类的对象或指向类对象的指针调用静态成员函数，
  当同一类的所有对象使用一个量时，对于这个共用的量，可以用静态数据成员变量，这个变量对于同一类的所有的对象都取相同的值。
  静态成员函数也是由同一类中的所有对象共用，只能调用静态成员变量和静态成员函数。
*/
