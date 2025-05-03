//function without arguments, without return value.
#include<stdio.h>
void sum(void);
int main()
{
sum();
return 0;
}
void sum(void)
{
  int a=10,b=10;
  printf("Sum=%d",a+b);
}