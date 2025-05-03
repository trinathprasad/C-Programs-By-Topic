#include<stdio.h>
int main()
{
  int a,b,c;
  a= 5==5 && 5;
  b= 5>=6 && 7;
  c= 5==5 || 8;
  printf("a=%d,b=%d,c=%d",a,b,c);
  return 0;
}