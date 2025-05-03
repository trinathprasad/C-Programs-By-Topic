#include<stdio.h>
int main()
{
  int a=10; /* var dec*/
  int *p; /* pointer var declaration*/

  p=&a; /* ptr initialazation*/
  printf("a value %d\n",a);
  printf("a addr %u\n", &a);
  printf("p value %u\n",p);
  return 0;
  

}