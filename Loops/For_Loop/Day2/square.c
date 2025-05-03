#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d%c",i,253);
    sum=sum+i*i;
    if(i<n)
    {
      printf("+");
    }
  }
  printf("=%d",sum);
  return 0;
}