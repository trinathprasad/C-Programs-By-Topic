//Function with arguments, without return value:
#include<stdio.h>
void sum(int,int);
void sum(int x,int y)
{
  printf("Sum=%d\n",x+y);
}

int main()
{
  int a=1, b=2;
  sum(a,b);
  sum(3,4);
  return 0;
}
