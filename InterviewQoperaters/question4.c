#include<stdio.h>
int main()
{
  int a,b,c;
  a= printf("I\t");
  b= a*printf("Love\t");
  c= a+b*printf("You\t");
  printf("%d%d%d",a,b,c);
  return 0;
}