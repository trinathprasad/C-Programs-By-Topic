//Function without arguments , with return value.
#include<stdio.h>
long fact();
long fact()
{
int n;
long f=1;
printf("Enter a no");
scanf("%d",&n);
while(n>1)
{
  f=f*n--;
}
return f;
}
int main()
{
  printf("Factorial=%ld",fact());
  return 0;
}