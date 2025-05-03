#include<stdio.h>
int main()
{
  int a,b,big;
  printf("Enter a,b values");
  scanf("%d %d",  &a,&b);
  printf(a>b?"a is big\n":b>a?"b is big\n":"Both are equal");
  return 0;
}