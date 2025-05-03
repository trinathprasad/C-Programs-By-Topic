#include<stdio.h>
int main()
{
  int n=123;
  printf("%d the revers number is %d",n, n%10);
  n=n/10;
  printf("%d%d",n/10,n%10);
  return 0;
}