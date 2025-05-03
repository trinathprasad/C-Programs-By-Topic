#include<stdio.h>

int sum(int,int);   /*Function declaration*/

int main()
{
  int add=sum(8,9);     /*Function Calling*/
  printf("The sum=%d",add);
  return 0;
}

int sum(int f,int s)  /*Function Defination*/
  {
  int add=f+s;
  return add;
}