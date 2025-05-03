#include<stdio.h>
int main()
{
  int a,i,n,c=0,f;
  printf("Enter the first and last number:");
  scanf("%d%d",&a,&n);
  printf("The prime numbers are:");
  for( ;a<=n;a++)
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
  printf("\n%d prime no's",c);
  return 0;
}