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

  cout << "=====77777777777777=====" << endl;

  vector<char> myVec3;  
  cout << "capacity:" << myVec3.capacity() << "\t";  
  cout << "size:" << myVec3.size() << endl;  
  
  for (int i = 0; i < 100; i++)  
    {  
      myVec3.push_back(i);  
      cout << "capacity:" << myVec3.capacity() << "\t";  
      cout << "size:" << myVec3.size() << endl;  
    } 
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

reserve和resize都不会使capacity变小，但都有可能使capacity变大，
具体怎么变大，reserve和resize是不一样的，
reserve能准确控制capacity而resize不能，
一般每次增大一半的当前capacity。

vector的容量之所以重要，有以下两个原因：
1. 容器的大小一旦超过capacity的大小，vector会重新配置内部的存储器，
   导致和vector元素相关的所有reference、pointer、iterator都会失效。（思考为什么？）
2. 内存的重新配置会很耗时间。
避免内存重新配置的方法：
方法一：reserve()保留适当容量
方法二：利用构造函数创建出足够空间
*/
