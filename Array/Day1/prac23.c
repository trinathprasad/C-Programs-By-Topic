#include<stdio.h>
int main()
{
   int a[1]={1},i;
   a[1]=2; a[2]=3, a[3]=4;
  for(i=0 ; i<4 ;i++)
  {
    printf("%6d", a[i]);
  }
  return 0;
} //      1     1     3     4