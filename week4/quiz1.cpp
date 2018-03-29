#include<iostream>
using namespace std;
class MyArray
{
  int *alist;
  int length;
public:
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

int main()  
{  
  MyArray a(10);  
  a.input();  
  a.display();
  cout<<endl;
  
  return 0;  
}
