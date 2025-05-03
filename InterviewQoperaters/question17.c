#include<stdio.h>
int main()
{
  int a=1,b=2,c,d;
  c=a++ == b--;
  d= --a == b++;
  printf("a=%d, b=%d, c=%d, d=%d",a,b,c,d);
  return 0;
}