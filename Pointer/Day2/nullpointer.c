#include<stdio.h>
int main()
{
  int *p=0; /*p=NULL this is called null pointer*/
  printf("P stored addr=%d\n Value at that address=%d",p,*p);

  return 0;
}