#include<iostream>  
using namespace std;  
class MyArray//定义一个基类MyArray，基类中可以存放一组数组。
{  
public:  
  int *alist;  
  int length;  
  
  MyArray();  
  MyArray( int leng);  
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
class RevArray:public MyArray//类RevArray继承自MyArray
{  
public:  
  RevArray(int n):MyArray(n)  
  {  
    cout<<"RevArray Constructing"<<endl;  
  }  
  ~RevArray()  
  {  
    cout<<"RevArray Destructing"<<endl;  
  }  
  void Reverse()  
  {  
    cout<<"The original RevArray"<<endl;  
    display();  
    for(int i=0; i<(length)/2; i++)  
      {  
        int temp=alist[i];  
        alist[i]=alist[length-1-i];  
        alist[length-1-i]=temp;  
      }  
    cout<<"After reverse"<<endl;  
    display();  
  }  
  void display()  
  {  
    cout<<"Display elements of Nawarray"<<endl;  
    for(int i=0; i<length; i++)  
      cout<<alist[i]<<" ";  
    cout<<endl;  
  }  
};

int main()  
{  
    MyArray m(5);  
    m.input();  
    m.display();
    cout<<endl;
    RevArray r(5);  
    r.input();  
    r.Reverse();
    cout<<endl;

    return 0;  
}
