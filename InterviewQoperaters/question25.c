#include<stdio.h>
int main()
{
  int a,b,c,d;
  a=b=c=2;
  d=a++ >=2 && ++b != c++;
  printf("a=%d,b=%d, c=%d, d=%d", a,b,c,d);
  return 0;
}