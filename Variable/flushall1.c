#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a 3 digit no :");
  scanf("%3d", &a);
  fflush(stdin);
  printf("Enter a 4 digit no :");
  scanf("%4d", &b);
  printf("a=%d, b=%d", a,b);
  return 0;
}