#include<stdio.h>
int main()
{
  int a=9999;
  printf("a=%d, %d\n",a, sizeof(++a));
  printf("a=%d, %d\n",a,sizeof(a=3333));
  return 0;
}