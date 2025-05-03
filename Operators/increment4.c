#include<stdio.h>
int main()
{
  int a=30;
  a=a++/2;
  printf("a=%d\n",a);
  a=++a/2;
  printf("a=%d\n",a);
  return 0;
}