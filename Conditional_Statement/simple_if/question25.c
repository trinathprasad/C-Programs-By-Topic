#include<stdio.h>
int main()
{
  int a=0;
  if(a++)
  {
    printf("a");
    printf("b");
    printf("c");
  }
  printf("a=%d", a);
  return  0;
}