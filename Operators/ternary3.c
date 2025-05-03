#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a,b values ");
  scanf("%d %d",&a,&b);
  printf("%d is big ",a>b?a:b);
  return 0;
}