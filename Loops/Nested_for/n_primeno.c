#include<stdio.h>
int main()
{
  int n,i,a,f=0,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("The prime numbers are:");
  for(a=1;a<=n;a++)
  {
    f=0;
    for(i=1;i<=a;i++)
    {
    if(a%i==0)
    {
      f++;
    }
  }
    if(f==2)
    {
      printf("%d ",a);
      c++;
    }
  }
  printf("\n%d prime numbers.",c);
  return 0;
}