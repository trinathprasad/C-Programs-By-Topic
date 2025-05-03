#include<stdio.h>
int main()
{
  int n,m,i,c,a;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n==0) printf("0");
  for(m=n;m;m=m/10)
  {
    for(c=0,a=n;a;a=a/10)
    {
      if(a%10==m%10)
      {
        c++;
      }
    }
    if(c==1)
    {
      printf("%d ",m%10);
    }
  }
  return 0;
}