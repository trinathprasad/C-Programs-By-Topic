#include<stdio.h>
#include <math.h>
int main()
{
  int b,p, sum=0;
 
  printf("Enter the value of b & p:");
  scanf("%d%d",&b,&p);

  while(p>=1)
  {
    sum=sum+pow(b,p);
    p--;
  }
  printf("The sum of power= %d ", sum);
  return 0;
}