#include <iostream>
using namespace std;

//输入重定向
int main()
{
  double f;
  int n;
  freopen("t.txt","r",stdin);
  cin>>f>>n;
  cout<<f<<","<<n<<endl;

  return 0;
}
