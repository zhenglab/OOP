#include <iostream>
using namespace std;

class CSample {
  int x;
public:
  CSample()
  {
    cout<<"Constructor 1 Called"<<endl;
  }
  CSample(int n)
  {
    x=n;
    cout<<"Constructor 2 Called"<<endl;
  }
};

int main()
{
  CSample array1[2];
  cout<<"Step 1"<<endl;
  CSample array2[2] = {4,5};
  cout<<"Step 2"<<endl;
  CSample array3[2]={3};
  cout<<"Step 3"<<endl;
  CSample * array4 = new CSample[2];
  delete [] array4;

  return 0;
}
