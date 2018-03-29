#include<iostream>  
using namespace std;  
class MyArray//定义一个基类MyArray，基类中可以存放一组数组。
{  
public:  
  int *alist;  
  int length;  
  
  MyArray();  
  MyArray(int leng);  
  ~MyArray();  
  void input();  
  void display();  
};

MyArray::MyArray()  
{  
  length=0;  
  alist=NULL;  
}

MyArray::MyArray(int leng)  
{  
  cout<<"Constructing"<<endl;  
  length=leng;  
  alist=new int[length+1];  
}

MyArray::~MyArray()  
{  
  if(alist!=NULL)  
    {  
      delete []alist;  
      length=0;  
      cout<<"Destructing"<<endl;  
    }  
}

void MyArray::input()  
{  
  if(alist!=NULL)  
    {  
      cout<<"Input "<<length<<" numbers for MyArray"<<endl;  
      for(int i=0; i<length; i++)  
        {  
          cin>>alist[i];  
        }  
    }  
}

void MyArray::display()  
{  
  cout<<"Display "<<length<<" elements of MyArray"<<endl;  
  for(int i=0; i<length; i++)  
    {  
      cout<<alist[i]<<" ";  
    }  
  cout<<endl;  
}  

class AverArray:public MyArray//类AverArray继承自MyArray
{  
public:  
  double aver;  
  AverArray(int n):MyArray(n)  
  {  
    cout<<"AverArray Constructing"<<endl;  
    aver=0;  
  }  
  ~AverArray()  
  {  
    cout<<"AverArray Destructing"<<endl;  
  }  
  void getAver()  
  {  
    for(int i=0; i<length; i++)  
      {  
        aver+=alist[i];  
      }  
    cout<<"Aver="<<aver/length<<endl;  
  }  
};

int main()  
{  
    MyArray m(5);  
    m.input();  
    m.display();
    cout<<endl;
    AverArray a(5);  
    a.input();  
    a.getAver();
    cout<<endl;

    return 0;  
}  
