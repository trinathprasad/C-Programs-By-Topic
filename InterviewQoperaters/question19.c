#include<stdio.h>
int main()
{
  int a= 7,b=5, c,d;
  c= a-- <= 6 && --b;
  d= --a !=5 || b++;
  printf("a=%d,b=%d, c=%d, d=%d",a,b,c,d);
  return 0;
}