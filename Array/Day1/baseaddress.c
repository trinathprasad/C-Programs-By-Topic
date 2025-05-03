#include<stdio.h>
int main()
{
  int a[]={9,3,1,8};
  printf("a[0] cell add %u\n", &a[0]);
  printf("a stored add %u\n",a);
  printf("a address    %u", &a);

  return 0;
}