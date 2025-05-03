#include<stdio.h>
int main()
{
  int a[2][3]={5,9,3,7},r,c;
  a[0][2]=25;
  a[1][2]=60;
  printf("Elements are:\n");
  for(r=0;r<2;r++)
  {
    for(c=0;c<3;c++)
    {
      printf("%4d",a[r][c]);
    }
    printf("\n");
  }
  return 0;
} 

// Elements are:
//    5   9  25
//    7   0  60
