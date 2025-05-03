#include<stdio.h>
int main()
{
  int n,i,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n==1)
  {
    printf("It is a composite no");
    return 0;
  }
for(i=1;i<=n;i++)
{
  if(n%i==0)
  {
    c++;
  }
}
if(c==2)
{
    printf("The number is a prime number");
}else{
    printf("The number is not a prime number");
}
return 0;
}