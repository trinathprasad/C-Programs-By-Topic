#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a,b value :");
  scanf("%d%d",&a,&b);
  (a>b) && printf("a is big") || printf("b is big");
  return 0;
}