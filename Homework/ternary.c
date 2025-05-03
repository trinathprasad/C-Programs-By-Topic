#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("%s",a>0 ? "a is a +ve number" : a<0 ?"a is a -ve number" : "Value of a is O");
  return 0;
}