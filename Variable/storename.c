#include<stdio.h>
int main()
{
  int a,b;
  char name [30];
  printf("Enter a,b values :");
  scanf("%d%d", &a, &b);
  printf("Enter your name :");
  scanf("%s" , &name);
  printf("a=%d, b=%d\n", a,b);
  printf("your name is %s", name);

  return 0;
}