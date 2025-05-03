#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a,b values :");
  scanf("%d %d", &a, &b);

  printf("sum=%d\n", a-(-b));
  printf("sum=%d\n",a-(~b)-1);

  return 0;
}