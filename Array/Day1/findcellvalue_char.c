#include<stdio.h>
int main()
{
  char a[4]={9,1,3,8},i;    //char datatype with array
  for(i=0;i<4;i++)
  {
    printf("a[%d] cell value=%d add=%u\n", i,a[i],&a[i]);
  }
  return 0;
}