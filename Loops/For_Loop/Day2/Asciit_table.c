#include<stdio.h>
int main()
{
  int i;
  for(i=0;i<256;i++)
  {
    printf("The ascii value of %d=%c\n",i,i);
  }
  return 0;
}