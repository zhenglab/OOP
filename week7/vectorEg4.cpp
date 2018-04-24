#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N = 9;
  vector<char> aa;
  cout << "i" << "\t" << "size" << "\t" << "capacity" << "\t" << endl;
  for(int i= 0; i < N; i++)
    {
      aa.push_back('f');
      //输出当前容量
      cout << i << "\t" << aa.size() << "\t" << aa.capacity() << "\t" << aa.max_size() << endl;
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
*/
