#include<stdio.h>
int main()
{
  int n,r,sum=0,mul=1;
  printf("Enter a number:");
  scanf("%d",&n);
  while(n)
  {
    r=n%10;
    sum=sum+r;
    mul=mul*r;
    n=n/10;
  }
  if(sum==mul){
    printf("This is a spy number");
  }else{
    printf("This is not a spy number");
  }
  return 0;
}