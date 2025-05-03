#include<stdio.h>
int main()
{
  int n;
  printf("Enter a value for n:");
  scanf("%d",&n);
  n%10>=5 && printf("%d",(n/10+1)*10) || printf("%d",n/10*10);
  return 0;
}