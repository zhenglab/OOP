#include <iostream>
using namespace std;

//getline()
int main()
{
  int x;
  char buf[100];
  cin>>x;
  //getline()读到留在流中的'\n'就会返回
  cin.getline(buf,90); //"12 abcd" "12"
  cout<<buf<<endl;

  return 0;
}
