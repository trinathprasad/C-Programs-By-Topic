#include<stdio.h>
int main()
{
  int a,b,t;
  printf("Enter the value for a,b:");
  scanf("%d%d", &a, &b);

  printf("Before swap a=%d,  b=%d\n",a,b);
  
  t=a;
  a=b;
  b=t;

  printf("After swap a=%d, b=%d\n", a,b);
  return 0;
}