#include<stdio.h>
int main()
{
  int a,b, *p=&a, *q=&b;
  printf("Enter a,b values ");
  scanf("%d %d",&a,&b);
  puts(a>b ? "a is big":b>a?"b is big":"both are equal");
  puts(*p>*q ? "a is big":*q>*p ? "b is big":"both are equal");
return 0;

}

// a is big
// a is big