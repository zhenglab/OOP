#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N = 9;
  vector<char> aa;
  cout << "i" << "\t" << "size" << "\t" << "capacity" << "\t" << endl;
  aa.reserve(8);
  for(int i= 0; i < N; i++)
    {
      aa.push_back('f');
      //输出当前容量
      cout << i << "\t" << aa.size() << "\t" << aa.capacity() << "\t" << aa.max_size() << endl;
    }

  cout << "=====66666666666666=====" << endl;
  
  vector<char> myVec;  
  myVec.reserve(100);  
  cout << "reserve(100)\t capacity:" << myVec.capacity() << endl;  
  cout << "reserve(100)\t size:" << myVec.size() << endl;  
  
  myVec.reserve(90);  
  cout << "reserve(90)\t capacity:" << myVec.capacity() << endl;  
  cout << "reserve(90)\t size:" << myVec.size() << endl;  
  
  myVec.reserve(110);  
  cout << "reserve(110)\t capacity:" << myVec.capacity() << endl;  
  cout << "reserve(110)\t size:" << myVec.size() << endl;

  cout << "=====88888888888888=====" << endl;

  vector<char> myVec2;
  myVec2.resize(100);  
  cout << "resize(100)\t capacity:" << myVec2.capacity() << endl;  
  cout << "resize(100)\t size:" << myVec2.size() << endl;  
  
  myVec2.resize(90);  
  cout << "resize(90)\t capacity:" << myVec2.capacity() << endl;  
  cout << "\resize(90)\t size:" << myVec2.size() << endl;  
  
  myVec2.resize(110);  
  cout << "resize(110)\t capacity:" << myVec2.capacity() << endl;  
  cout << "resize(110)\t size:" << myVec2.size() << endl;  
}



/*
方法	作用
size()	返回容器的大小
empty()	判断容器是否为空
max_size()	返回容器最大的可以存储的元素
capacity()	返回容器当前能够容纳的元素数量

当空间不够用时，
1、寻找更大空间 
2、将原数据复制过去 
3、释放原空间

reserve用来（预留空间）改变capacity，不改变size；
会去分配内存，但不会构造出对象；
如果改变后的capacity比当前capacity大，则capacity会变大；
反之，capacity不变。

resize用来改变vector的size，有可能也会改变capacity。
如果改变后的size比当前capacity大，则capacity会变大，同时构造出多出来的对象；
反之，capacity不变，同时析构一些不再需要的对象。
*/
