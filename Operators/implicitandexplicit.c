#include<stdio.h>
int main()
{
  int a=10.2; /*implicit type casting*/
  float b=10;
  printf("a=%d\n",a);
  printf("b=%f\n",b);
  printf("%d\n",5/2);
  printf("%f\n",5.0/2);
  printf("%f\n",5.0/2.0);
  printf("%d\n",(int)5.0/2);
  printf("%f\n",(float)5/2); /*Explicit type casting*/
  printf("%f\n",(float)(5/2));
  return 0;

}