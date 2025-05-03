#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a,b values :");
  scanf("%d %d",&a, &b);

  printf("Before swap a=%d,  b=%d\n", a,b);
  printf("After swap a=%d, b=%d\n", b,a);

  return 0;
}