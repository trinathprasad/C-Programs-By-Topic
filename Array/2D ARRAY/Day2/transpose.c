#include<stdio.h>
int main()
{
  int a[2][3]={1,2,3,4,5,6},r,c;
  printf("Transpose Elements are:\n");
  for(c=0;c<3;c++)
  {
    for(r=0;r<2;r++)
    {
      printf("%3d",a[r][c]);
    }
    printf("\n");
  }
  return 0;
}