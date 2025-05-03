#include<stdio.h>
int main()
{
  int n,t,i;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    for(t=1;t<=n;t++)
    {
      printf("%d X %d = %d\t",t,i,t*i);
    }
    printf("\n");
  }
  return 0;
}