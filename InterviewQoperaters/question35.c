#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a,b values :");
  scanf("%d %d",&a, &b);
  printf("%s", a>b ?"a is big" :b>a?"b is big":"both are equal");
  return 0;
}