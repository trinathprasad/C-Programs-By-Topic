#include<stdio.h>
int main()
{
  int n,sum;
  printf("Enter a number:");
  scanf("%d",&n);
  sum=n*(n+1)/2;
  printf("sum=%d\n avg=%.2f\n",sum, (float)sum/n);
  return 0;
}