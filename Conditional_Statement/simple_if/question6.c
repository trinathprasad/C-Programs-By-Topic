#include<stdio.h>
int main()
{
  if(printf("\0\0"))
  {
    printf("a");
    printf("b");
  }
  printf("c");

  return 0;
} /*c*/