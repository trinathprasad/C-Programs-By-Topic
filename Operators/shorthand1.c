#include<stdio.h>
int main()
{
  int a=10.3, b=8.2, c=4.4;
  a*=b/=c-=1.1;
  printf("a=%d,b=%d,c=%d",a,b,c);
  return 0;
}