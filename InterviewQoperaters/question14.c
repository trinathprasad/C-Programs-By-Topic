#include<stdio.h>
int main()
{
  int a=1, b=2 ;
  a= a++ + ++b;
  b= ++a + b++;
  printf("a=%d, b=%d\n",a,b);
  return 0;
}