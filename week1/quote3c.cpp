#include <iostream>
using namespace std;

void swap (int & a, int & b)
{
  int tmp;
  tmp=a;a=b;b=tmp;
}

int main()
{
  int n1,n2;
  n1=2;
  n2=100;
  cout<<n1<<" "<<n2<<endl;
  swap(n1,n2);
  cout<<n1<<" "<<n2<<endl;
  return 0;
}
