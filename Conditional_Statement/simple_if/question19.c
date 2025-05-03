#include<stdio.h>
int main()
{
  int a=0, b=1, c=10;
  if(a++) a++; ++b; c=a+b;
  
    printf("a=%d, b=%d, c=%d", a,b,c);

  return 0;
}
