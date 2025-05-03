#include<stdio.h>
int main()
{
  printf("%d\n",5 && 5.5);
  printf("%d\n", 'a'&& 0);
  printf("%d\n", 0 || '0');
  printf("%d\n", !0 && !0.1);

  return 0;
}