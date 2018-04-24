#include <iostream>
#include <deque>
using namespace std;

int main()
{
  deque< deque<int> > v(3);
  for(int i=0;i<v.size();++i)
    for(int j=0;j<4;++j)
      v[i].push_back(j);
  for(int i=0;i<v.size();++i) {
    for(int j=0;j<4;++j)
      cout<<v[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}
