#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("last digit is %d\n",n%10);
  for(n ; n>9 || n<-9 ; n=n/10)
  {

  }
    printf("first digit is %d\n",n);
  return 0;
}