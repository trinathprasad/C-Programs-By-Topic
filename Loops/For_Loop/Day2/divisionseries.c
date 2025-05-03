#include<stdio.h>
int main()
{
  int n,i;
  float sum=1;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("1");
  for(i=1;i<=n;i++)
  {
    printf("+1/%d",i);
    sum=sum+1.0/i;
  }
  printf("=%.2f",sum);
  return 0;
}

/*1+1/1+1/2+1/3+1/4+1/5=3.28*/