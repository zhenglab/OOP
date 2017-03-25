#include <stdio.h>
#include <string.h>

void MyPrintf(const char *p)
{
  strcpy(p,"this");
  printf("%s",p);
}

int main()
{
  char p[5]="hello";
  MyPrintf(p);
  return 0;
}
