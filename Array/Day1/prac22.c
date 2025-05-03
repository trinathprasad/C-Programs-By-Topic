#include<stdio.h>
#define n 4 /*macro- symbolic constant*/
int main()
{
  int a[n]={1,2,3,4},i;
  for(i=0 ; i<4 ;i++)
  {
    printf("%6d", a[i]);
  }
  return 0;
} //     1     2     3     4