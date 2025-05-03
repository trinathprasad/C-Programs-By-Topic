#include<stdio.h>
int main()
{
  int n,m,rev=0,rem;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("-",n=-n);
  }
  m=n;
  while(m)
  {
    rem=m%10;
    rev=rev*10+rem;
    m=m/10;
  }
  do
  {
    switch(rev%10)
    {
      case 0:printf("zero\n");
      break;
      case 1:printf("one\n");
      break;
      case 2:printf("two\n");
      break;
      case 3:printf("three\n");
      break;
      case 4:printf("four\n");
      break;
      case 5:printf("five\n");
      break;
      case 6:printf("six\n");
      break;
      case 7:printf("seven\n");
      break;
      case 8:printf("eight\n");
      break;
      case 9:printf("nine\n");
      break;
    }
    rev=rev/10;
  }
  while(rev!=0);
  while(n%10==0 && n!=0)
  {
    printf("Zero\n ",n=n/10);
  }
  return 0;
}