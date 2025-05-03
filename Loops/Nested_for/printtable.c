#include<stdio.h>
int main()
{
  int i,t,n;
  printf("Enter a number:");
  scanf("%d",&n);
  for(t=1;t<=n;t++)
  {
    for(i=1;i<=10;i++)
    {
      printf("%d x %d = %d\n",t,i,t*i);
    }
  }
  return 0;
}