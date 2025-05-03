#include<stdio.h>
int main()
{
 int a[4]={1,2,3,4},i;
  for(i=0 ; i<5 ; i++) // value 4 but the loop runs for 5 times.
  {
    printf("%3d", a[i]);
  }
  return 0;
}     1  2  3  4  garb