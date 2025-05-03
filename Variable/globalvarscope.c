#include<stdio.h>
int a=10;
void show()
{
  printf("a=%d\n",++a);
}
void main()
{
  show();
  show();
  show();
}