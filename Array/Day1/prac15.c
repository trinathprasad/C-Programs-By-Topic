#include<stdio.h>
int main()
{
 int a[4]={'1','2','3',40000},i;
  for(i=0 ; i<4; i++) 
  {
    printf("%6d", a[i]);
  }
  return 0;
}     // 49    50    51   40000 prints ascii value.