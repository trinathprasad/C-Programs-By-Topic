//Function with arguments, without return value:
#include<stdio.h>
void max(int x, int y)
{
  printf(x>y ?"x is big" : y>x ? "y is big":"Both are equal");
}
int main()
{
  int x,y;
  printf("Enter x,y values");
  scanf("%d%d",&x,&y);
  max(x,y);
  return 0;
}