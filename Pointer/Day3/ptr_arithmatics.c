#include<stdio.h>
int main()
{
  int a=100, *p=&a, *q=p;
  puts(p==q ? "Equal" : "Not equal");

  return 0;
}
// Equal