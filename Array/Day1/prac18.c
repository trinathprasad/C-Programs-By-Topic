#include<stdio.h>
int main()
{
  int a[4]={1>2,2>1,5%3, 5%2.0}, i;
  for(i=0 ; i<4; i++)
  {
    printf("%6d" , a[i]);
  }
  return 0;
} //compile time Error due to 5%2.0