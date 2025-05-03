#include<stdio.h>
int main()
{
  int a[4]={9,3,1,8};
  printf("%d bytes\n",sizeof(a));
  printf("%d cells\n", sizeof(a)/sizeof(int));
  printf("%d cells\n",sizeof(a)/sizeof(a[0]));
  return 0;
}  16 bytes 4 cells 4 cells