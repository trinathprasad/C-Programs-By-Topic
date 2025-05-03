//Function without arguments , with return value.
#include<stdio.h>
int sum();
int main()
{
  printf("Sum=%d",sum());
  return 0;
}
int sum()
{
  int a=10,b=20;
  return a+b;
}