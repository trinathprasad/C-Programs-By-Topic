#include<stdio.h>
int main()
{
  int a;
  if(a=0,1)
  {
    printf("a");
    printf("b");
    printf("c");
  }
  printf("a=%d", a);
  return  0;
} /*abca=0*/