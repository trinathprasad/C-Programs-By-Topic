#include<stdio.h>
int a=10;
void main()
{
  int a=20;
  printf("%d\t",a);
  {
    int a=30;
    printf("%d\t",a);
  }
  printf("%d",a);
  
}