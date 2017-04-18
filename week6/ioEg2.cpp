#include <iostream>
using namespace std;

//输出重定向
int main()
{
  int x,y;
  cin>>x>>y;
  //freopen()文件流重定向
  freopen("test.txt","w",stdout); //将标准输出重定向到test.txt文件
  if(y==0)
    { cerr<<"error."<<endl; cout<<"error"; }
  else
    cout<<x/y;

  return 0;
}
