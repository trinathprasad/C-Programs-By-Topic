#include<stdio.h>
int main()
{
  char name[30];
  printf("Enter your name :");
  gets(name);
  printf("your name is %s", name);

  return 0;
}