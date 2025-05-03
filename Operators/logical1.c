#include<stdio.h>
int main ()
{
  int a=4, b,  c;
  printf("%d\n", 7 > 5 > 1);
  printf("%d\n", 7 > 5 > 0);
  a=  !a;
  b= !!a;
  c= !!!b;
  printf("a=%d, b=%d, c=%d", a,b,c);

  return 0;
}