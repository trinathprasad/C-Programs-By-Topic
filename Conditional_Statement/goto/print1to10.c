#include<stdio.h>
int main()
{
  int i=1;
  xyz:
  printf("%d\n",i);
  i++;
  if(i<=10)
  goto xyz;

  return 0;
}