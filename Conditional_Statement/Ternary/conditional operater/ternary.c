#include<stdio.h>
int main()
{
  int a,b,big;
  printf("Enter a,b values");
  scanf("%d %d",  &a,&b);
  printf(a>b?"a is big\n":"b is big\n");
  a>b?printf("a is big\n"):printf("b is big\n");  
  printf("%d is big\n",a>b?a:b);
  big=a>b?a:b;
  printf("%d is big",big);

  return 0;
}