#include<stdio.h>
#include <math.h>
int main()
{
  int n,m,sum=0,r,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(m=n;m;m=m/10)
  {
    c++;
  }
  for(m=n;m;m=m/10)
  {
    r=m%10;
    sum=sum+pow(r,c);
  }
  if(sum==n)
  {
    printf("The number is a armstrong number");
  }else{
    printf("The number is not a armstrong number.");
  }

  return 0;
}