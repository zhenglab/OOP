#include <iostream>
#include <deque>

using namespace std;

int main()
{
  int N = 9;
  deque<char> aa;
  //cout << "i" << "\t" << "size" << "\t" << "capacity" << "\t" << endl;
  cout << "i" << "\t" << "size" << endl;
  for(int i= 0; i < N; i++)
    {
      aa.push_back('f');
      //输出当前容量
      //cout << i << "\t" << aa.size() << "\t" << aa.capacity() << "\t" << aa.max_size() << endl;
      cout << i << "\t" << aa.size() << "\t" << aa.max_size() << endl;
    }
}
