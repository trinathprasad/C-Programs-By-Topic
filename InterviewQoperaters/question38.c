#include<stdio.h>
int main()
{
  int a=10;
  printf("%d\n",a<<2+1>>2);
  a=a<<2+1>>2;
  printf("%d\n",a);
  return 0;
}