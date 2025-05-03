#include<stdio.h>
int main()
{
  float x=3/2; /*Integer division results in an integer 
  3/2=1(fractional part discarded)*/
  printf("x=%f\n",x+7);
  printf("x=%f\n",x++);
  printf("x=%f",x);
  return 0;
}