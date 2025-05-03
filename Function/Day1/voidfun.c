#include<stdio.h>
void count();  /*Function declaration*/
int main()
{
  count();    /*Function Calling*/
  return 0;
}
void count()  /*Function Defination*/
{
  for( int i=1;i<=50;i++)
  {
    printf("%d\n",i);
  }
}