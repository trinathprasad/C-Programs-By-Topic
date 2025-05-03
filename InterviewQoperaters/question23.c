#include<stdio.h>
int main()
{
  int a=2;
  printf("%d,%d,%d,%d,%d\n", ++a, a++, a--, --a, ++a);
  printf("%d,%d,%d,%d,%d\n",++a,a*10, a=10, a++, ++a);
  return 0;
}