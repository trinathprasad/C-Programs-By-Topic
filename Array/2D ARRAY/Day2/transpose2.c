#include<stdio.h>
int main()
{
  int a[2][3]={1,2,3,4,5},r,c;
  printf("Transposed elements\n");
  for(r=0;r<3;r++)
  {
    for(c=0;c<2;c++)
    {
      printf("%3d",a[c][r]);
    }
    printf("\n");
  }
  return 0;
}