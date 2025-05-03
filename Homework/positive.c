#include<stdio.h>
int main()
{
  int a;
  printf("Enter a value :");
  scanf("%d", &a);
  (a>0)&& printf ("a is +ve") || (a<0) && printf("a is -ve") || printf("value of a is 0");
  return 0;
}