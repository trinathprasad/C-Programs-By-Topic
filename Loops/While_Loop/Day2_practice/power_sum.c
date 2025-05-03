#include<stdio.h>
int main()
{
  int b,p, sum=0;
  long res=1;

  printf("Enter the value of b & p:");
  scanf("%d%d",&b,&p);

  while(p)
  {
    res=res*b;
    sum=sum+res;
    p--;
  }
  printf("The sum of power= %ld ", sum);
  return 0;
}