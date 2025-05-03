#include<stdio.h>
int main()
{
  int n,a,m,rev=0,rem,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("The palindrom numbers are:");
  for(a=1;a<=n;a++)
  {
    rev=0;
    for(m=a;m;m=m/10)
    {
      rem=m%10;
      rev=rev*10+rem;
    }
    if(rev==a)
    {
      printf("%d ",a);
      c++;
    }
  }
  printf("\n%d palindrom numbers.",c);
  return 0;

}