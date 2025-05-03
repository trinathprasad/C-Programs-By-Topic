#include<stdio.h>
int main()
{
  int i=1;
  xyz:
  if(i<=10)
  {
    printf("%d\n", i);
    i++;
    goto xyz;
  }
  return 0;
}