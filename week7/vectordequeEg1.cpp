#include <iostream>  
#include <vector>  
#include <deque>  
using namespace std;  
int main()  
{  
  vector<int> v(2);  
  v[0] = 10;  
  int *p = &v[0];  
  cout << "vector第1个元素迭代指针*p=" <<*p << endl;    //10  
  v.push_back(20); cout<<"v.capacity(): "<<v.capacity()<<endl;
  v.push_back(30); cout<<"v.capacity(): "<<v.capacity()<<endl;
  v.push_back(40); cout<<"v.capacity(): "<<v.capacity()<<endl;
  //v.push_back(50); cout<<"v.capacity(): "<<v.capacity()<<endl;
  //v.push_back(60); cout<<"v.capacity(): "<<v.capacity()<<endl;
  //v.push_back(70); cout<<"v.capacity(): "<<v.capacity()<<endl;
  //v.push_back(80); cout<<"v.capacity(): "<<v.capacity()<<endl;
  //v.push_back(90); cout<<"v.capacity(): "<<v.capacity()<<endl;
  cout << "vector容量变化后原vector第1个元素迭代指针*p=" << *p << endl; //数不确定  
  deque<int> d(2);  
  d[0] = 10;  
  int *q = &d[0];  
  cout << "deque第1个元素迭代指针*q=" <<*q << endl;  //10
  d.push_back(20);
  d.push_back(30);
  d.push_back(40);
  d.push_back(50);
  d.push_back(60);
  d.push_back(70);
  d.push_back(80);
  d.push_back(90);
  cout << "deque容量变化后第1个元素迭代指针*q=" <<*q << endl;  //10  
}
