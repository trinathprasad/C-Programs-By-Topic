#include<stdio.h>
int main()
{
  int a[]={9,3,1,8};
  printf("%d bytes\n", sizeof(a));
  printf("%d cells\n", sizeof(a)/sizeof(int));
  return 0;
} 16 bytes 4 cells 