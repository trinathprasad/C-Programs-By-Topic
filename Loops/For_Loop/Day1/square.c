#include<stdio.h>
int main()
{
  int n, i,sum=0,sq;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sq=n*n;
    sum=sum+sq;
    printf("%d",sum);
  }
  return 0;
}