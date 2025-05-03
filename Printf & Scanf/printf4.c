#include<stdio.h>
int main()
{
  char a=65, b=66, c=a+b;
  printf("c=%d\n",c);
  printf("c=%d\n", c=260);
  printf("c=%d\n", c=-131);

  return 0;
}