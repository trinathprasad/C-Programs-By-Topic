#include<stdio.h>
int main()
{
  int a=9;
  printf("%d\n", ++a, a=25);
  printf("%d\t%d\t%d\n",a++, ++a, a=printf("Indian\n"));
  printf("%d",++a);
  return 0;
}