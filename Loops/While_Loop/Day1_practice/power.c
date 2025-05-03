#include<stdio.h>
int main()
{
  int b,p;
  long int res=1;
  printf("Enter the value of base and power");
  scanf("%d%d",&b,&p);
  while(p>=1)
  {
    res=res*b;
    p--;
  }
  printf("The result is = %ld", res);
  return 0;
}