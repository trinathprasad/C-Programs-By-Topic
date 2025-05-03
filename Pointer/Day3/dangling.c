#include<stdio.h>
int main()
{
  int *p;
  {
    int a=100;
    p=&a;
    printf("a=%d\n",*p);
  }
  printf("a=%d\n",*p); //Dangling pointer
  *p=NULL;
  printf("a=%d\n",*p);
  
  return
}
// a=100
// a=100
// a=0