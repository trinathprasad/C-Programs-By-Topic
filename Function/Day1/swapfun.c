#include<stdio.h>
void swap(int , int);
int main()
{
  int x=7;
  int y=4;
  printf("x=%d,y=%d",x,y);
  swap(x,y);
  printf("x=%d,y=%d",x,y);

  return 0;

}
void swap(int first, int second)
{
  printf("\n first=%d, second=%d",first,second);
  int temp=first;
  first=second;
  second=temp;
  printf("\n first=%d, second=%d",first,second);

}