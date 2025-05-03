#include<stdio.h>
int main()
{
  int a=3,b;
  b=a++;
  printf("a=%d,b=%d",a,b);
  a=3;
  b=++a;
  printf("a=%d,b=%d",a,b);
  return 0;
}