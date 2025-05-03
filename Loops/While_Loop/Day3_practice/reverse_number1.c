#include<stdio.h>
int main()
{
  int n,r;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("-",n=-n);
  }
  while(n)
  {
    r=n%10;
    printf("%d",r);
    n=n/10;
  }
  return 0;
}