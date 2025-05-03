#include<stdio.h>
void show(int x,int y)
{
  printf("x=%d, y=%d",x,y);
}
int main()
{
  int a=3;
  show(a++,a++);
  return 0;
}