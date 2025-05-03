#include<stdio.h>
int a=100;
void main()
{
  int a=200;
  printf("a=%d",a);
  return;
}

/* when local and global with same name always priority goes to local varible */