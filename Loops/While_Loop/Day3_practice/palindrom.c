#include<stdio.h>
int main()
{
  int n,rem,rev=0,temp;
  printf("Enter a number:");
  scanf("%d",&n);
  temp=n;
  while(temp)
  {
    rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
  }
  if(rev==n)
  {
    printf("%d is a palandrom number",n);
  }else
  {
    printf("%d is not a palandrom number",n);
  }
  return 0;
}