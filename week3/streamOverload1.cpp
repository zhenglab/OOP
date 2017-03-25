#include <iostream>
using namespace std;

class CStudent {
public:
  int nAge;
};

#include "streamOverload1.h"

int main()
{
  CStudent s;
  s.nAge=20;
  cout<<s<<" hello";

  return 0;
}

