#include<stdio.h>
#include <math.h>

int main()
{
  int b,p;
  printf("Enter base, power value:\n");
  scanf("%d %d", &b ,&p);


  printf("%d ^ %d =%f\n",b,p,pow(b,p));
  printf("%d ^ %d =%.0f\n",b,p,pow(b,p));
  printf("%d ^ %d =%d\n",b,p,(int)pow(b,p));



  return 0;

}