#include <iostream>
using namespace std;

class Test {
public:
  Test(int n)
  {
    cout<<"Constructor 1"<<endl;
  }
  Test(int n, int m)
  {
    cout<<"Constructor 2"<<endl;
  }
  Test()
  {
    cout<<"Constructor 3"<<endl;
  }
};

int main()
{
  Test array1[3] = {1, Test(1,2)};
  Test array2[3] = {Test(2,3), Test(1,2), 1};
  Test * pArray[3] = {new Test(4), new Test(1,2)};

  return 0;
}
