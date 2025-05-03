#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n==1)
  {
    printf("It is a composite no");
    return 0;
  }
for(i=2;i<=n/2;i++)
{
  if(n%i==0)
  {
    printf("The number is a composite no");
  }
}
printf("The number is a prime number");
return 0;
}